#include<iostream>
#include<vector>
using namespace std;


void sub(int arr[], vector<int> &ds, int sum, int index ,int n, int k){

    if(index == n){
        if(sum==k){
            for(auto it:ds){
                cout << it << " ";
            }cout << endl;
        }
        return;
    }

    ds.push_back(arr[index]);
    sum += arr[index];
    sub(arr,ds,sum,index+1,n,k);
    sum -= arr[index];
    ds.pop_back();
    sub(arr,ds,sum,index+1,n,k);
}

int main(){
    int arr[] ={1,2,1};
    vector<int> ds;
    int n =3;

    sub(arr,ds,0,0,n,2);
    
}