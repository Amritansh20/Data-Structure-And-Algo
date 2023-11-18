#include<iostream>
using namespace std;



void print(int &n){
    if(n==6){
        return;
    }else{
        cout << n << " ";
        n++;
        print(n);
    }
}
int main(){
    int n=1;
    print(n);
}