#include <bits/stdc++.h>
using namespace std;


int main(){
    string s = "abcde";
    string goal = "cdeab";
    int shift =1;
    int n = s.size();
    string ans ="";
    int j =0;
    while(j<s.size()){

    for(int i=0;i<s.size();i++){
        char ch = s[(i+shift)%n];
        ans +=ch;
    }

    if(ans==goal){
        cout << "yes";
        break;
    }else{
        ans="";
        cout << "not yet" << " ";
        shift++;
    }
    j++;
    }

}