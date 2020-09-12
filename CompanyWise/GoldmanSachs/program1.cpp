#include<iostream>
using namespace std;


int computeSnowPack(int arr[], int n){
	int count=0;
	int maxLeft=0,maxRight=0,i=0,j=n-1;
	while(i<=j){
		if(arr[i]<arr[j]){
			if(arr[i]>maxLeft)
				maxLeft=arr[i];
			else
				count += maxLeft-arr[i];
			i++;
		}
		else{
			if(arr[j]>maxRight)
				maxRight=arr[j];
			else
				count += maxRight-arr[j];
			j--;
		}
	}
	return count;
}




bool doTestsPass(){
	bool result=true;
	int arr[]={0,1,3,0,1,2,0,4,2,0,3,0};
	int len = sizeof(arr)/sizeof(arr[0]);
	result=computeSnowPack(arr,len)==13;

	return result;
}



int main(){


	if(doTestsPass())
		cout<<"All Tests Pass"<<endl;
	else
		cout<<"Tests Fail"<<endl;

	return 0;
}

