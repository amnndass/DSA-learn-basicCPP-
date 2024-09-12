#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &arr, int n, int requirement, int mid){
	int treeCount = 1;
	int treeLen = 0;
	
	for(int i = 0; i<arr.size(); i++){
		if(arr[i] > mid){
			treeLen = arr[i] - mid;
		}
        treeCount++;

        // if(treeLen > requirement){
        //     return false;
        // }
		
	}
	if(treeLen >= requirement){
		return true;
	}
	return false;
	
}


// your code goes here
int binarySearch(int n, int requirement, vector<int> &arr){
    sort(arr.begin() , arr.end());
    int start = 0;
    int end = arr[arr.size() -1];
    
    int mid = start + (end - start)/2;
    int ans = -1;
    
    while(start < end){
        if(isPossible(arr, n , requirement, mid)){
            ans = mid;
            start = mid + 1;
        }else{
            end = mid -1;
        }

        mid = start + (end - start)/2;
    }
    return ans;


}


int main() {
    int n;
    int requirement;
    //std::vector <int> arr = {20 ,15, 10, 17};
    vector<int> arr;

    cin>>n>>requirement;
    // cin>>arr;

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
	cout << binarySearch(n, requirement, arr) << endl;


    // sort(arr.begin() , arr.end());
    // int start = 0;
    // int end = arr[arr.size() -1];

    // cout << end << endl;
}