#include <iostream>
using namespace std;

void reverseAlt(int arr[], int len){
    for(int i=0; i<=len; i=i+2){
        if(i+1 < len){
            swap(arr[i] , arr[i+1]);
        }
    }
}

void printArr(int arr[], int len){
    for(int i = 0; i<len; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    
    int arr[5] = {1,2,3,4,6};

    reverseAlt(arr, 5);
    printArr(arr , 5);
    return 0;
}