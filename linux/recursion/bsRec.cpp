#include <iostream>
using namespace std;

bool binarySearch(int arr[], int key , int start , int end){
    //base case
    if(start > end){
        return false;
    }

    int mid = start + (end - start)/2;
    if(arr[mid] == key){
        return true;
    }

    if(arr[mid] > key){
        return binarySearch(arr, key, start, mid-1);
    }else{
        return binarySearch(arr, key, mid+1, end);
    }
}

int main(){
    //todo: perform binary search using recursion

    //array
    int arr[6] = {1,2,3,4,5,6};

    //function
    if(binarySearch(arr, 4, 0, 5)){
        cout << "present" << endl;
    }else{
        cout << "not present" << endl;
    }
}