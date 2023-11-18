#include<iostream>
#include<vector>
using namespace std;

void help(int n, string ds, vector<string> &ans, string str, int index){
    if(ds.size()==n){
        for(int i=0;i<ds.size()-1;i++){
            if(ds[i]== '1' && ds[i+1]=='1'){
                return;
            }
        }
        for(int i=0;i<ds.size();i++){
            cout << ds[i] << " ";
        }cout << endl;
        return;
    }

    for(int i=0;i<str.size();i++){
        ds += str[i];
        help(n,ds,ans,str,i);
        ds = ds.substr(0,ds.size()-1);
    }

}

int main(){
    int n = 4;
    vector<string> ans;
    help(n,"",ans,"01",0);

}