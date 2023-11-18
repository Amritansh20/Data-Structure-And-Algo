#include <bits/stdc++.h>
using namespace std;


int main(){
    string s = "paper";
    string t = "title";
    unordered_map<char,vector<int>> mp1;
    unordered_map<char,vector<int>> mp2;

    for(int i=0;i<s.size();i++){
        mp1[s[i]].push_back(i);
        mp2[t[i]].push_back(i);

        if(mp1[s[i]]!=mp2[t[i]])
        return false;
    }
    return true;
  
    
}