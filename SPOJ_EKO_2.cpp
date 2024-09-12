//first spoj problem, code done in college computer

// 4 7
// 20 15 10 17

// Output:
// 15


// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

bool isPossible(int n, int requirement, vector<int>&arr, int mid){
    
    int totalWood = 0;
    int treeCount = 1;
    
    for(int i = 0; i<arr.size(); i++){
        
        if(arr[i] > mid){
            totalWood += arr[i] - mid;
        }else{
            treeCount ++;
        }
    }
    
    if(totalWood < requirement){
        return false;
    }else{
        return true;
    }
}



int binarySearch(int n, int requirement, vector<int>&arr){
    int start = 0;
    int end = arr[arr.size() -1];
    
    int mid = start + (end  - start)/2;
    int ans = -1;
    
    while(start <= end){
        if(isPossible(n, requirement, arr, mid)){
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
    // Write C++ code here
    int n = 5 ;
    int requirement = 20;
    vector <int> arr = {4, 42, 40, 26, 46};
    cout << binarySearch( n,  requirement, arr) << endl;
    // int n = 4 ;
    // int requirement = 7;
    // vector <int> arr = {20,15,10,17};
    // cout << binarySearch( n,  requirement, arr) << endl;

    return 0;
}
