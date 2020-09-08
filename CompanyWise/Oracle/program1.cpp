#include<iostream>
#include<string>
using namespace std;

bool isAddChar(string str1, string str2, int len1, int len2){
     int count=0;
    if(len1>len2){
        for (string::size_type i = 0; i < str1.size(); i++){
            int res=str2.find(str1[i]);
            if(res==-1){
                count++;
                if(count==2)
                    return false;
                str2.insert(i,1,str1[i]);
            }
        }
    }
    else{
        for (string::size_type i = 0; i < str2.size(); i++){
            int res=str1.find(str2[i]);
            if(res==-1){
                count++;
                if(count==2)
                    return false;
                str1.insert(i,1,str2[i]);
            }
        }
    }
    return str1.compare(str2);
}

bool isSwapChar(string str1, string str2){
    int j,k,count=0;
    for(string::size_type i = 0; i < str2.size(); i++){
            if(str1[i]!=str2[i]){
                count++;
                if(count==1)
                    j=i;
                else if(count==2){
                    k=i;
                    swap(str1[j],str1[k]);
                }
                else
                    return false;
            }
    }
    return str1.compare(str2);          
}       

bool isChangeCaseChar(string str1,string str2){
    int count=0;
    if(!(std::all_of( str1.begin(), str1.end(), &::islower ))){
         for(string::size_type i = 0; i < str1.size(); i++){
             if(isupper(str1[i])){
                 count++;
                 if (count>1)
                    return false;
                else
                    str1[i]=str1[i]+32;
             }
         }
    }
    else{
        for(string::size_type i = 0; i < str2.size(); i++){
             if(isupper(str2[i])){
                 count++;
                 if (count>1)
                    return false;
                else
                    str2[i]=str2[i]+32;
             }
         }
    }
    return str1.compare(str2);
}
bool isTransformable(string str1, string str2){
   int str1Len = str1.length();
   int str2Len = str2.length();
   if(str1Len != str2Len)
       return isAddChar(str1,str2, str1Len, str2Len);
    else if((std::all_of( str1.begin(), str1.end(), &::islower ) && (std::all_of( str2.begin(), str2.end(), &::islower )))){
        return isSwapChar(str1,str2);
    }
    else{
        return isChangeCaseChar(str1,str2);
    }
    
}

int main(){
    bool result;
    result=isTransformable("abcDe", "abcde"); 
    cout<<result<<endl;

}
