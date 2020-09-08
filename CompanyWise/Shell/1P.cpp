#include<iostream>
#include<string>
using namespace std;

int main(){
	string str="b";
	int len=str.length();
	auto ip=0;
	if(len == 1)
		cout<<"true at len1"<<endl;

	for(int i=0;i<len;i++){
		if(str[i]=='a'){
			ip=str.find('b');
			while(ip!=len){
				if(str[ip]=='a'){
					cout<<"false at starts a"<<endl;
					break;
				}
				ip++;
			}
		}
		if(str[i]=='b'){
			ip=str.find('a');
			cout<<"Ip-->"<<ip<<endl;
			if(ip>0){
				cout<<"false at starts b"<<endl;
				break;
			}
		}
	}

	cout<<"true"<<endl;

}

