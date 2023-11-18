#include<bits/stdc++.h>
using namespace std;


int main(){
    string s = "loveleetcode";
    map<char,int> mpp;

    for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
    }

    map<char,int>:: iterator it = mpp.begin();

    while(it != mpp.end()){
        cout << it->first << "->" << it->second << endl;
        it++;
    }
    int ans= s.size()-1;
   
    map<char,int>:: iterator iter = mpp.begin();
    while(iter != mpp.end()){
        
        if(iter->second == 1){
            int index = s.find(iter->first);
            if(index<ans){
                ans = index;
            }
        }
        iter++;
    }
   
    cout << ans;

    return 0;


}