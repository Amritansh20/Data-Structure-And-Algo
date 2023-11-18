#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }cout << endl;

}

void help(vector<int> candidates, int target, vector<int>&ds, int index){

    if(index==candidates.size()){
        if(target==0)
        print(ds);
        return;
    }

    ds.push_back(candidates[index]);
    help(candidates,target-candidates[index],ds,index+1);
    ds.pop_back();
    help(candidates,target,ds,index+1);

}


int main(){
    vector<int> candidates{1,1,2,5,6,7,10};
    vector<int> ds;
    help(candidates,8,ds,0);
}