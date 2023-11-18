#include<iostream>
#include<unordered_map>
using namespace std;


int func(string s, int n){
    
    int count = 1;
    unordered_map<char, int> m1;
    for (int i = 0; i < n; i++){
        if (m1[s[i]] == 0){
            m1[s[i]] = count;
            count *= 2;
        }
        else{
            int temp = m1[s[i]];
            m1[s[i]] = count;
            count *= 2;
            count -= temp;
        }
    }
    return count;
}

int main(){
    string s = "";
    int n =func(s,3);
    cout << n;
}