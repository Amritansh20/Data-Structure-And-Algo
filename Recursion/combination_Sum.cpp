#include<iostream>
#include<vector>
using namespace std;



void combinationSum(vector<vector<int>> &ans, vector<int> &ds, vector<int> arr, int index, int target){
    if(index==arr.size()){
        if(target==0){
            ans.push_back(ds);
        }
        return;
    }

    if(target<=arr[index]){
        ds.push_back(arr[index]);
        combinationSum(ans,ds,arr,index,target-arr[index]);
        ds.pop_back();
    }
    combinationSum(ans,ds,arr,index+1,target);
}

int main(){
    vector<int> arr{2,3,6,7};
    vector<vector<int>> ans;
    vector<int> ds;
    combinationSum(ans,ds,arr,0,7);
}