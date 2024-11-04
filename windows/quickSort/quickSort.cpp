#include <iostream>
using namespace std;

int partition(int arr[], int start, int end){
    int pivot = arr[start];

    //counter
    int cnt = 0;

    //finding smaller elements that the pivot
    for(int i = start+1; i<=end; i++){
        if(arr[i] <= pivot){
            cnt++;
        }
    }

    //place pivot index in the right position
    int pivotIndex = start+cnt;
    swap(arr[start], arr[pivotIndex]);

    //condition
    int i = start;
    int j = end;

    while (i < pivotIndex && j > pivotIndex) {
        while (arr[i] <= pivot && i < pivotIndex) {
            i++;
        }
        while (arr[j] >= pivot && j > pivotIndex) {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int start, int end){
    //base case
    if(start >= end){
        return;
    }

    //partition
    int p = partition(arr, start, end);

    //left
    quickSort(arr, start, p-1);

    //right
    quickSort(arr, p+1, end);
}

int main(){
    //todo: perform quick sort

    //array
    int arr[5] = {1,45,22,32,0};

    //function
    quickSort(arr, 0, 4);

    //printing the array
    for(int i: arr){
        cout << i << endl;
    }
}