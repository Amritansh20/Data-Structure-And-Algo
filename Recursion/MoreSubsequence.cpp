#include<iostream>
#include<vector>
using namespace std;

int count=0;
void print(string s){
    for(int i=0;i<s.size();i++){
        cout << s[i];
    }cout << endl;
}
void subSequence(string s1,string ds,int index){
  
    
    for(int i=index;i<s1.size();i++){

        if(i>index && s1[i]==s1[i-1]) continue;

        ds += s1[i];
        subSequence(s1,ds,index+1);
        ds.pop_back();
    }
}

int main(){

    string s1 = "eeg";
    string ds="";
    subSequence(s1,ds,0);

}