#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


void printArray(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }
}
int main(){
    vector<int> nums{3,1,-2,-5,2,-4};
    vector<int> positive;
    vector<int> negative;
    vector<int> answer;

    for(int i=0;i<nums.size();i++){
        if(nums[i]<=0){
            positive.push_back(nums[i]);
        }else{
            negative.push_back(nums[i]);
        }
    }

    
    for(int i=0;i<max(positive.size(), negative.size());i++){
        answer.push_back(negative[i]);
        answer.push_back(positive[i]);
        
    }
    printArray(answer);

    
}