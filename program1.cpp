#include<iostream>
#include<math.h>
using namespace std;  

int main(){ 
    int num;
    bool flag=false;
    cin>>num;
    //we use sqrt() because factor will not be greater than square root. 
    for (int i = 2; i <= sqrt(num); i++) { 
        if (num % i == 0) { 
            flag = true; 
            break; 
        } 
    } 
  
    if (flag == false) { 
        cout<<num<<" is a prime number"<<endl; 
    } 
    else { 
        cout<<num<<" is not a prime number"<<endl; 
    } 
    return 0; 
} 
