#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;

int main(){
    vector<int> nums{-1,2,9};
    int sum=0;
       int count=0;
       map<int,int> mpp;
       mpp[0] =1;
       for(int i=0;i<nums.size();i++){
           sum += nums[i];
           int rem =  sum % 2;
           count += mpp[rem];
           mpp[rem] += 1; 
       }

    
    cout << count;
}