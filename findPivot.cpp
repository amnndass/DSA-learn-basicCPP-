#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int searchInSortedArray(int arr[], int n, int k){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start) /2;

    while(start<end){
        if(arr[mid] < arr[0]){
            start = mid+1;
        }else{
            end = mid;
        }
    }
    return start;

}

int binarySearch(vector<int>& arr, int k, int start, int end){
    int mid = start+ (end-start)/2;

    while(start<=end){
        if(arr[mid] == k){
            return mid;
        }else if(arr[mid] > k){
            end = mid-1;
        }else if(arr[mid] < k){
            start = mid+1;
        }

        mid = start + (end-start)/2;
    }
    return -1;
}

int getPivot(vector<int>& arr, int n){
    int start = 0; 
    int end = n-1;
    int mid = start + (end - start)/2;

    while(start<end){
        if(mid == 1){
            return mid;
        }
        if(arr[mid] > arr[0]){
            start = mid + 1;
        }else{
            end = mid;
        }

        mid = start + (end-start)/2;
    }
    return start;
}


int main(){

    //k = 3
    int arr[5] ={7, 8, 1, 3, 5};
    vector <int> arrr ={7, 8, 9, 1, 3, 5};
    vector <int> arr1 ={11, 13, 5, 8, 9, 10};
    vector <int> arr2 ={11, 3 ,4, 5, 6, 7, 8, 9 };
    //cout << searchInSortedArray(arr, 5, 3) << endl;

    //cout << binarySearch(arrr, 5, 2 , 4);

    //cout << getPivot(arr2, 8) << endl;
    cout << arr1.size() << endl;

    

}