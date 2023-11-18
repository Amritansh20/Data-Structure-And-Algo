#include<iostream>
#include<vector>
using namespace std;

void parenthesis(int i,int j,int n, string ds, vector<string> &ans){

    if(ds.size()==n*2){
        
        for(int i=0;i<ds.size();i++){
            cout << ds[i] << " ";
        }cout << endl;
        return;
    }



        if(i<n){

        parenthesis(i+1,j,n,ds+"(",ans);
        }
    
        if(j<i){
      
        parenthesis(i,j+1,n,ds+")",ans);
        }
    

      
        
        
    
}

int main(){
    int n =3;
    string ds="";
    vector<string> ans;
    parenthesis(0,0,n,ds,ans);
}