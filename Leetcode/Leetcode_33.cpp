#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> nums{4,5,6,7,0,1,2};

    int start =0;
    int end = nums.size()-1;
    int mid = start + (end-start)/2;
    int target =2;

    while(start <= end){
        if(nums[mid]==target){
            cout << mid;
            break;
        }
      

        mid = start + (end-start)/2;
    }
}