#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> nums){
    for(int i=0;i<nums.size();i++){
        cout << nums[i] << " ";
    }cout << endl;
}
// void reverse(vector<int> &nums, int i, int j){
//     if(j<i)
//     return;
//     else{
//         swap(nums[i],nums[j]);
//         reverse(nums,i+1,j-1);
//     }
// }

//using one variable
void reverse(vector<int> &nums, int i){
    if(i >= nums.size()/2) 
    return;
    else{
        swap(nums[i],nums[nums.size()-i-1]);
        reverse(nums,i+1);
    }
}

int main(){
    vector<int> nums{1,2,3,4,5,6};
    reverse(nums,0);
    print(nums);
}