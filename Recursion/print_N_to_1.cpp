#include<iostream>
using namespace std;

void print(int &n){
    if(n==0)
    return;
    else{
        cout << n << " ";
        n--;
        print(n);
    }
}


int main(){
    int n=5;
    print(n);
}