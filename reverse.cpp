#include <iostream>
using namespace std;

void reverse(int arr[] , int len){
    int start = 0;
    int end = len -1;

    while(start<=end){
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int len ){
    for(int i = 0; i<len; i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
}

int main(){
    int arr[6] = {1,4,0,5,-2,15};
    int brr[5] = {2,6,3,9,4};

    reverse(arr, 6);
    reverse(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);


    return 0;
}