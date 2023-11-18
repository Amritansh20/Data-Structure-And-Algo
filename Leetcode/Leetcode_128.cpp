#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_set>
using namespace std;

int main(){
    vector<int> nums{100,102,100,101,101,4,3,2,3,2,1,1,1,2};
    int longest =0;

    unordered_set<int> st;
    for(int i=0;i<nums.size();i++){
     st.insert(nums[i]);
    }
    
    for(auto it : st ){
        if(st.find(it-1) == st.end()){
            int count = 1;
            int x= it;
            while(st.find(x+1)!= st.end()){
                x += 1;
                count++;

            }
            longest = max(longest,count);
        }
    }
    cout << longest;

   
}