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
            cout << head->data<<" ";
            display(head->next);
        }
        cout<<endl;
    }

    void del (node *head, int n)
    {
        auto front = head, back = head;
        while (front) {
            front = front->next;
            if (n-- < 0) {
                back = back->next;
            }
        }
        if (n == 0) {
            head = head->next;
        } else {
            back->next = back->next->next;
        }
        delete head;
    }

};

int main()
{
    int n=1;
    Linkedlist a;
    a.add_node(5);
    a.add_node(6);
    a.add_node(7);
    a.display(a.gethead());
    a.del(a.gethead(),n);
    a.display(a.gethead());
    return 0;
}
