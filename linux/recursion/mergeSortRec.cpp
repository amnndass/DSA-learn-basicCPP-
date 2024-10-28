#include <iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end){
    int tempArr[10];
    int index = 0;

    int left= start;
    int right = mid +1;

    while(left <= mid && right <= end){
        if(arr[left] < arr[right]){
            tempArr[index] = arr[left];
            index++;
            left++;
        }else{
            tempArr[index] = arr[right];
            index++;
            right++;
        }
    }
    
    while(left <= mid){
        tempArr[index] = arr[left];
        left++;
        index++;
    }

    while(right <= end){
        tempArr[index] = arr[right];
        right++;
        index++;
    }

    for(int i = start; i<=end; i++){
        arr[i] = tempArr[i-start];
    }
}

void mergeSort(int arr[], int start, int end){

    if(start >= end) return;

    int mid = start + (end - start)/2;

    mergeSort(arr, start, mid);
    mergeSort(arr, mid+1, end);
    
    merge(arr, start, mid, end);
}

int main(){
    //todo: perform merge sort using recursion

    //array
    int arr[6] = {1,543,32,2,3,4};

    //function
    mergeSort(arr, 0, 5);

    cout << "done" << endl;

    //printing the array
    for(int i = 0; i<sizeof(arr)/sizeof(arr[0]); i++){
        cout << arr[i] << " ";
    }cout << endl;
}