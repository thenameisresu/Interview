#include<iostream>
#include<vector>
using namespace std;

int collectPass(vector<vector<int> > v){
    int count=0;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            if((i==0 && j==0)||(i==v[i].size()-1 && j==v[i].size()-1)){
                if(v[i][j]==-1){
                    return 0;
                }
            }
            if(v[i][j]==-1){
                i++;
                j--;
            }
            if(v[i][j]==1){
                count++;
                v[i][j]=0;
            }
        }
    }
    cout<<"after right turn"<<endl;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=v.size()-1;i>=0;i--){
        for(int j=v[i].size()-1;j>=0;j--){
            if(v[i][j]==-1){
                if(j==v[i].size()-1){
                    j=0;
                }
                else
                {
                    i--;
                    j++;    
                }  
            }
            if(v[i][j]==1){
                count++;
                v[i][j]=0;
            }
        }
    }

    cout<<"after pickup"<<endl;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return count;
}
int main(){
    int row=3;
    int col=3;
   // vector<vector<int> > v(row,vector<int> (col));
    vector<vector<int> > v{{0,1,-1},{1,0,-1},{1,1,1}};
    //vector<vector<int> > v{{0,1,1},{1,0,-1},{1,1,-1}};
    cout<<"before pickup"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    int result=collectPass(v);
    cout<<result<<endl;
    return 0;
}
