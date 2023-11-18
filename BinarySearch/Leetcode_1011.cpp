#include<iostream>
#include<vector>
using namespace std;

    int noOfDays(vector<int>& weights, int capacity){
        int n = weights.size();
        int load=0;
        int days =1;
        for(int i=0;i<n;i++){
            if(load+weights[i] > capacity){
                load = weights[i];
                days +=1;
            }else{
                load+= weights[i];
            }
        }
        return days;
    }

    int findMax(vector<int>& weights){
        int maxi=INT_MIN;
        for(int i=0;i<weights.size();i++){
            maxi = max(maxi,weights[i]);
        }
        return maxi;
    }

    int findSum(vector<int>& weights){
        int sum=0;
        for(int i=0;i<weights.size();i++){
            sum += weights[i];
        }
        return sum;
    }

    int main(){
        vector<int> weights{1,2,3,4,5,6,7,8,9,10};
        int days =5;

        int low= findMax(weights);
        cout << "low is " << low << endl;
        int high = findSum(weights);
        cout << "high is " << high << endl;

        while(low<=high){
            int mid = low + (high-low)/2;
            int daysReq = noOfDays(weights,mid);
            cout << " when mid is " << mid << " days required is " << daysReq << endl;
            if(daysReq>days)
            low=mid+1;
            else
            high=mid-1;
        }
        cout << low;
    }