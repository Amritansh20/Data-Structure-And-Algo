#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> nums{7,1,2,5,3,10,4};
    
    int mini = INT_MAX;
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i+1]<nums[i]){
             mini = min(mini,nums[i+1]);
        }
    }

    int minPos=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==mini){
            minPos = i;
            break;
        }
    }

    int maxi= INT_MIN;
    for(int i=minPos+1;i<nums.size()-1;i++){
        if(nums[i+1]>nums[i]){
            maxi = max(maxi,nums[i+1]);
        }
    }

    cout << maxi-mini;
}