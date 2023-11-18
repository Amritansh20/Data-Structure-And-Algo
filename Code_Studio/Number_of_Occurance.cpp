#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> arr{1,8,12,15,17,17,18,18,18,19 
};
    int start=0;
	int end = arr.size()-1;
	int mid = start + (end-start)/2;
    int x=18;

	while(start<=end){
		if(arr[mid]==x){
			int a = mid;
			int b=mid;
			
			while(arr[a] ==x && a>=0){
				a--;
			}

			while(arr[b] ==x && b <arr.size()){
				b++;
			}
			
		    cout <<  (b-1) - (a+1) +1;
		}

		if(arr[mid]< x){
			start = mid+1;
		}

		if(arr[mid] > x){
			end= mid-1;
		}

        mid = start + (end-start)/2;
   
}
    return 0;
}