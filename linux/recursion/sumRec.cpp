#include <iostream>
using namespace std;

int findSum(int arr[], int size){
    //base cases
    if(size == 0){
        return 0;
    }

    if(size == 1){
        return arr[0];
    }

    return arr[0] + findSum(arr+1, size-1);
}

int main(){
    //todo: find sum of array using recursion

    //array
    // int arr[6] = {1,2,3,4,5,6};

    //edge case
    int arr[] = {};

    //function
    int sum = findSum(arr, 0);
    cout << sum << endl;
}