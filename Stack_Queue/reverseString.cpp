#include<iostream>
#include<stack>
using namespace std;

int main(){
    string s = "amritansh";
    stack<char> st;
    string ans="";

    for(int i=0;i<s.size();i++){
        st.push(s[i]);
    }

    for(int i=0;i<s.size();i++){
        ans += st.top();
        st.pop();
    }

    for(int i=0;i<s.size();i++){
        cout << ans[i];
    }

}