#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

void printArray(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }cout << endl;
}

int main(){
  vector<int> nums{2,3,3,2,5,2,3,3,4,2};
  int n = nums.size()/3;
  map<int,int> mpp;
  vector<int> ans;
  mpp[0]=0;

  for(int i=0;i<nums.size();i++){
    mpp[nums[i]]++;
  }

  for(auto it:mpp){
    if(it.second > n){
        ans.push_back(it.first);
    }
    }

    printArray(ans);

}