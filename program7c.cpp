#include<iostream>
using namespace std;
float getMedian(int num1[], int num2[],int len1, int len2){
    int j=0,k=1;float median;
    int size=len1+len2;
    int result[size];int mid=(size/2)-1;
    if(len1!=0 || len2!=0){
        for(int i=0;i<len1;i++){
            result[j]=num1[i];
            j+=2;    
        }
        for(int i=0;i<len2;i++){
            result[k]=num2[i];
            k+=2;    
        }
        if(size==3){
            median=static_cast<float>(result[mid]);
        }
        else{
            median=static_cast<float>(result[mid]+result[mid+1])/2;
        }
    }
    return median;
}
int main(){
    int num1[]={1,2,3,4,7};
    int num2[]={0,5,6,9};
    int len1=sizeof(num1)/sizeof(num1[0]);
    int len2=sizeof(num2)/sizeof(num2[0]);
    float median=getMedian(num1,num2,len1,len2);
    cout<<"median"<<median<<endl;
}
