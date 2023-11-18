#include<iostream>
#include<vector>
using namespace std;


bool palindrome(string &s, int i, int j){
    if(s[i]!=s[j])
    return false;
    else{
        palindrome(s,i+1,j-1);
    }
    return true;
}

int main(){
    string s = "madam";
    cout << palindrome(s,0,4);
}