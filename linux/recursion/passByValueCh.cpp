#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void swapIndexes(int arr[]){
    arr[0] = arr[1];
}

int main(){
    // todo: check if updadting indexes of an array in a function affects the actual array
    // confusing terms : pass by value , pass by reference
    // reference : merge Sort

    //array
    int arr[5] = {1,2,3,4,5};

    swapIndexes(arr);

    // printing the array
    for(int i = 0; i<sizeof(arr)/sizeof(arr[0]); i++){
        cout << arr[i] << " ";
    }cout << endl;
}