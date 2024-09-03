// objective : to use binary search to find an element in a sorted array

#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size -1;

    while(start<=end){
        int mid = (start + end)/2;

        if(arr[mid] == key){
            return mid;
        } 
        if(arr[mid] < key){
            start = mid + 1;
        }
        if(arr[mid] > key){
            end = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[5] = {3,6,7,12,22};
    cout << binarySearch(arr, 5, 3) << endl;

}