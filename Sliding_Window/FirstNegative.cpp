#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void print(vector<int> nums){
    for(int i=0;i<nums.size();i++){
        cout << nums[i] << " ";
    }
}
int main(){
    vector<int> nums{12,-1,-7,8,-15,30,16,28};
    int k =3;
    int i=0,j=0;
    queue<int> q;
    vector<int> ans;
    int n = nums.size();

    while(j<n){
        if(nums[j]<0)
        q.push(nums[j]);

        if(j-i+1<k)
        j++;
        else if(j-i+1==k){
            if(q.empty())
            ans.push_back(0);
            else
            ans.push_back(q.front());
            
            if(nums[i]==q.front())
            q.pop();

            i++;
            j++;
        }
    }
    print(ans);
}