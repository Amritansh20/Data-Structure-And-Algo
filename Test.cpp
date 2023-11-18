#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> cardPoints{1,2,3,4,5,6,3};
        int n = cardPoints.size();
        int window = n-3;
        int left=0;
        int right=0;
        long long minSum = INT_MAX;
        long long sum=0;
        int arraySum=0;

        for(int i=0;i<n;i++){
            arraySum += cardPoints[i];
        }

        while(right<n){
            sum += cardPoints[right];
            
            if(right-left+1 < window){
            right++;
            }
            else if(right-left+1 == window){
              minSum = min(sum,minSum);
              sum-= cardPoints[left];
              left++;
              right++;
            }
        }
        cout << (arraySum-minSum);
}