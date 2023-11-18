#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums{2,3,5,2,9,7,1};
    int k=3;
    int i=0;
    int j=0;
    int sum=0;
    int maxSum=INT_MIN;
    int n = nums.size();

    while(j<n){
        sum += nums[j];
        if(j-i+1 <k)
        j++;
        else if(j-i+1==k){
            maxSum = max(sum,maxSum);
            sum -= nums[i];
            i++;
            j++;
        }
    }
    cout << maxSum;
}