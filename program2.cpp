// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std;

// int main(){
//     vector<int> vec{8,1,3,1,2,3,5,2,7};
//     vector<int>::iterator it;
//     int len=vec.size();
//     sort(vec.begin(),vec.end());
//     it=unique(vec.begin(),vec.end()+len);
//     vec.resize(distance(vec.begin(),it));
//     for(auto &i:vec){
//         cout<<i<<endl;
//     }
// }

// C++ program to demonstrate the use of std::unique 
#include <iostream> 
#include <vector> 
#include <algorithm> 
using namespace std; 

int NumOfRepeatedEle(vector<int> v){
    vector<int>::iterator ip; 
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
    int len1=v.size(); 
    return len-len1;
}

int main() 
{ 
	vector<int> v = { 1, 2, 3, 3, 3, 10, 1, 2, 3, 7, 7, 8 };
    int result=NumOfRepeatedEle(v);
    cout<<"Number of Repeated elements in vector are: "<<result<<endl; 
	return 0; 
} 
