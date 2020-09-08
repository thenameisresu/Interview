#include <iostream>
#include <string>

using namespace std;

int main(){
    string inputStr="Thisisasampleparagraphthatisgoingtobechangedtosomethingelse";
    string outputStr="Thwaswasasamplestorythatwasgoingtobechangedtosomethingelse";
    int result=0;
    string searchStr[]={"is","paragraph"};
    string replaceStr[]={"was","story"};
    int searchLen=0;

    for(auto &i:searchStr){
        searchLen++;
    }

    for(auto &i:inputStr){
        for(int i=0;i<searchLen;i++){
            if (inputStr.find(searchStr[i]) != string::npos){
                int pos=inputStr.find(searchStr[i]);
                int len=searchStr[i].length();
                inputStr.replace(pos,len,replaceStr[i]);
            } 
        }
    }
    result=inputStr.compare(outputStr);
    if(result==0)
        cout<<"same"<<endl;
    else
        cout<<"not same"<<endl;

return 0;
}
