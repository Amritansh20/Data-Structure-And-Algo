#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }cout << endl;
}
void subset(int index,int sum, vector<int> &nums, vector<int> &ans){
    if(index==nums.size()){
        ans.push_back(sum);
        return;
    }

    sum += nums[index];
    subset(index+1,sum, nums,ans);
    sum -= nums[index];
    subset(index+1,sum,nums,ans);
}

int main(){
    vector<int> nums{3,1,2};
    vector<int> ans;
    subset(0,0,nums,ans);
    sort(ans.begin(),ans.end());
    print(ans);
}