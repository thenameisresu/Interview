#include <iostream>
using namespace std;
float findSquareRoot(int num){
    float x=0;
    float y=num/2;
    while(y!=x){
        x=y;
        y=((num/x)+x)/2;
    }
    return y;
}
int main() {
    int num;
    float result;
    cin>>num;
    result=findSquareRoot(num);
    cout<<result<<endl;
    return 0;
}
