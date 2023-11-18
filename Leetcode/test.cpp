#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

void printArray(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }cout << endl;
}

int main(){
    vector<int> nums{0,1,0,2,1,0,1,3,2,1,2,1};
    int n = nums.size();
    vector<int> prefix;
    prefix.push_back(nums[0]);

    vector<int> suffix(n,0);
    suffix[n-1] = nums[n-1];

    for(int i=1;i<nums.size();i++){
        prefix.push_back(max(nums[i],prefix[i-1]));
    }

    for(int i=n-2;i>=0;i--){
        suffix[i] = max(nums[i],suffix[i+1]);
    }

    int result=0;
    for(int i=0;i<n;i++){
        int k = min(prefix[i],suffix[i]);
        int l = k-nums[i];
        result += l;
    }

    printArray(prefix);
    printArray(suffix);
    cout << result;
}