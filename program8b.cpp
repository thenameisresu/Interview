#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};

class Linkedlist
{
private:
    node *head,*tail;
public:
    Linkedlist()
    {
        head = NULL;
        tail = NULL;
    }

    node* gethead()
    {
        return head;
    }

    void add_node(int n)
    {
        node *tmp = new node;
        tmp->data = n;
        tmp->next = NULL;

        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
    }

    
    void display(node *head)
    {
        if(head == NULL)
        {
            return;
        }
        else
        {
            cout << head->data << endl;
            display(head->next);
        }
    }

    void del (node *head_ref, int pos)
    {
    if (head_ref == NULL)
   {
      return;
   }
   
   auto temp = head_ref;
    if (pos == 0)
    {
        head_ref = temp->next; 
        delete temp;               
        return;
    }
    
    for (int i=0; temp!=NULL && i<pos-1; i++)
    {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL)
    {
        return;
    }
    auto next = temp->next->next;
    delete temp->next;  
    temp->next = next;     
    }

};

int main()
{
    int n=3;
    Linkedlist a;
    a.add_node(11);
    a.add_node(22);
    a.add_node(33);
    a.add_node(40);
    a.add_node(50);
    a.display(a.gethead());
    a.del(a.gethead(),n);
    a.display(a.gethead());
    return 0;
}
