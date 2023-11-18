#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void printArray(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }cout << endl;
}
int main(){
    vector<int> nums{2,3,1};
    int n = nums.size()-1;
    int breakPoint=0;
    
    for(int i=n;i>0;i--){
        if(nums[i-1]< nums[i]){
            breakPoint=i;
            break;
        }
    }

        if(breakPoint==0){
            sort(nums.begin(),nums.end());
        }else{
            int toSwap = nums[breakPoint-1];
            int min= INT_MAX;

            for(int j=breakPoint;j<=n;j++){
                if(nums[j]-toSwap>0 && nums[j]-toSwap<min){
                    int temp= nums[j];
                    nums[j] = nums[breakPoint-1];
                    nums[breakPoint-1] = temp;

                }
            }
        }
        sort(nums.begin()+breakPoint, nums.end());

    printArray(nums);
    }


