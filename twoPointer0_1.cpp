//objective -- write a sorting algorithm that sorts 0 and 1 in an array with two pointer approach

#include <iostream>
using namespace std;


int sortArray(int arr[] , int len){
    int start = 0;
    int end = len-1;

    while(start<end){
        while(arr[start] == 0){
            start++;
        }
        while(arr[end] == 1){
            end--;
        }
        swap(arr[start], arr[end]);

        start++;
        end--;
    }
}

void printArray(int arr[], int len){
    for(int i = 0; i<len; i++){
        cout << arr[i] ;
    }
    cout << endl;
}


int main(){
    int arr[8] = {1,0,1,0,0,1,1,0};
    sortArray(arr, 8);
    printArray(arr, 8);
}