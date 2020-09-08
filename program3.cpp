#include <iostream> 
#include <vector> 
#include <algorithm> 
using namespace std; 

int NumOfUniqueEle(vector<int> v){
    vector<int>::iterator ip; 
    vector<int> v1=v;
    int count=0,co=0;
    cout<<"Original Vector: ";
    for (ip = v.begin(); ip != v.end(); ++ip) { 
		cout << *ip << " ";
	}
    cout<<endl;
    int len=v.size();
	sort(v.begin(), v.end()); 
    cout<<"Sorted Vector: ";
    for (ip = v.begin(); ip != v.end(); ++ip) { 
		cout << *ip << " "; 
	}
    cout<<endl; 
	ip = unique(v.begin(), v.end()); 
	v.resize(distance(v.begin(), ip));
    cout<<"Unique Vector: "; 
	for (ip = v.begin(); ip != v.end(); ++ip) { 
		cout << *ip << " "; 
	}
    cout<<endl;
    for(auto i=0;i<v.size();i++){
        count=0;
        for(auto j=0;j<v1.size();j++){
            if(v[i]==v1[j]){
                ++count;
                if(count>1){
                    remove(v.begin(),v.end(),v[i]);
                    count=0;
                    --i;
                }
            }
        }
    }
    ip=unique(v.begin(),v.end());
    v.resize(distance(v.begin(),ip));
    return v.size();
}

int main() 
{ 
	vector<int> v = { 1, 2, 3, 3, 3, 10, 1, 2, 3, 7, 7, 8,9,4,4,5,6 };
    int result=NumOfUniqueEle(v);
    cout<<"Number of Repeated elements in vector are: "<<result<<endl; 
	return 0; 
} 
