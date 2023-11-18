#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;


void print(vector<int> nums){
    for(int i=0;i<nums.size();i++){
        cout << nums[i] << " ";
    }
}
int main(){
      string s = "abccccdd";

      

        int oddCount = 0;
        unordered_map<char, int> ump;
        for(char ch : s) {
            ump[ch]++;
            if (ump[ch] % 2 == 1)
                oddCount++;
            else    
                oddCount--;
        }
     cout << oddCount;;
    
}