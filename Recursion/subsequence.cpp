#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> array){
    for(int i=0;i<array.size();i++){
        cout << array[i] << " ";
    }cout << endl;
}

void sub(vector<int> arr, vector<int> &ds, int n, int index){

    if(index>=n){
   

       if(ds.size()==0){
        cout << "{}";
       }else{
        for(auto it: ds){
        cout << it << " ";
       }cout << endl;
       }
       return;
    }

    ds.push_back(arr[index]);
    sub(arr,ds,n,index+1);
    ds.pop_back();
    sub(arr,ds,n,index+1);
}

int main(){
    vector<int> arr{3,1,2};
    int n=3;
    vector<int> ds;
    int index=0;
    sub(arr,ds,n,index);
}