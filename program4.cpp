#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v{6,7,8,9,10,0,1,2,3,5,4};
    int key=10;
    for(const auto &i:v){
        auto pos=distance(v.begin(),find(v.begin(),v.end(),key-i));
        if((find(v.begin(),v.end(),i)-v.begin() !=pos)){
           cout<<"index are: "<<find(v.begin(),v.end(),i)-v.begin()<<" and"<<pos<<endl; 
        }
    }
    return 0;
}
