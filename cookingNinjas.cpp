//#include <bits/stdc++.h> 
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

bool isPossible(vector<int> &rank, int m, int mid){
    
    int dishes = 0;
    

    for(int r : rank){
        int timeTaken = 0;
        int i = 1;
        while(timeTaken + r * i <= mid){
            
            timeTaken += r*i;
            dishes++;
            i++;

            if(dishes >= m) return true;
        }
    }
    return dishes >= m;
}


int minCookTime(vector<int> &rank, int m){
    // Write your code here

    int start =0;
    int end = 1e9;

    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end){
        if(isPossible(rank, m , mid)){
            ans = mid;
            end = mid -1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}


int main(){
    vector<int> arr= {1,2,3,4};
    int n = 4;
    int m = 11;

    cout << minCookTime(arr,m) << endl;
    return 0;
}

/*
2
1 1
10
4 11
1 2 3 4
*/