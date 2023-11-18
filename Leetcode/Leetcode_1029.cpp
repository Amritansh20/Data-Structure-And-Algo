#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string s = "(()())(()(()))";
    string ans="";

    int openParenthesis =1;
    for(int i=1;i<s.size();i++){
        if(s[i]=='('){
            openParenthesis++;
        }else{
            openParenthesis--;
        }

        if(openParenthesis!=0){
        ans = ans+s[i];
        }else{
            openParenthesis=1;
             i=i+1;
        }
    }

    for(int i=0;i<ans.size();i++){
        cout << ans[i];
    }

}