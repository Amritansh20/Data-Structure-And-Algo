#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> start{1,3,0,5,8,5};
    vector<int> end{2,4,6,7,9,9};

    vector<pair<int,int>> vec;
    for(int i=0;i<start.size();i++){
        vec.push_back(make_pair(end[i],start[i]));
    }

    sort(vec.begin(),vec.end());
    int limit = vec[0].first;
    int count=1;
    for(int i=1;i<vec.size();i++){
        if(vec[i].second > limit){
            count++;
            limit = vec[i].first;
        }
    }
    cout << count;

}
