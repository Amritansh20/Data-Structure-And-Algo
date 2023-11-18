#include<iostream>
#include<utility>
#include<vector>
using namespace std;

int main(){
    vector<int> nums{5,6,8,9,6,5,5,6};
    pair<int,int> ans;
    ans.first =-1;
    ans.second=-1;

    for(int i=0;i<nums.size();i++){
        if(nums[i] == 6){
            ans.first =nums[i];
        }

        if(nums[i]==8){
            ans.second=nums[i];
        }
    }

    cout << ans.first << " "<< ans.second;

}