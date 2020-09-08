#include <iostream>
#include <string>

using namespace std;

int main(){
    string inputStr="thisisrepalceprogram";
    string outputStr="thiswasrepalceprogram";
    int result=0;
    string searchStr="is";
    string replaceStr="was";

    for(auto &i:inputStr){
                if (inputStr.find(searchStr) != string::npos){
                    int pos=inputStr.find(searchStr);
                    int len=searchStr.length();
                    inputStr.replace(pos,len,replaceStr);
                }
    }
    if (inputStr.find(replaceStr) != string::npos){
                    int pos=inputStr.find(replaceStr);
                    int len=replaceStr.length();
                    inputStr.replace(pos,len,searchStr);
    }
    result=inputStr.compare(outputStr);
    if(result==0)
        cout<<"same"<<endl;
    else
        cout<<"not same"<<endl;
return 0;
}
