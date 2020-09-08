#include<iostream>
using namespace std;

int main(){
    int arr1[]={1,3};int arr2[]={2};
    int j=0,k=1;
    int len1=sizeof(arr1)/sizeof(arr1[0]);
    int len2=sizeof(arr2)/sizeof(arr2[0]);
    int size=len1+len2;
    int result[size];int mid=(size-1)/2;
    float median;
    
    if(len1!=0 || len2!=0){
        for(int i=0;i<len1;i++){
            result[j]=arr1[i];
            j+=2;    
        }
        for(int i=0;i<len2;i++){
            result[k]=arr2[i];
            k+=2;    
        }
        if(size==3){
            median=static_cast<float>(result[mid]);
        }
        else{
            median=static_cast<float>(result[mid]+result[mid+1])/2;
        }
    }
}
