#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> sort(vector<int>& arr, int size){
    
    if(size == 1){
        return arr;
    }

    for(int i = 0; i<arr.size()-1; i++){
        if(arr[i] < arr[i+1]){
            swap(arr[i] , arr[i+1]);
        }
    }

    return sort(arr, size-1);

}

int main(){
    //todo: perform bubble sort using recursion

    //array
    vector<int> arr = {1,3,534534,454,43,2};

    //funciton
    sort(arr, 6);



    //print array
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}