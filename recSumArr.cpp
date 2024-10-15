#include <iostream>
using namespace std;

int sum(int *arr, int size){
    if(size<1) return 0;

    if(size == 1){
        return arr[0];
    }


    int ans = arr[0] + sum(arr+1, size-1);
}

int main(){
    int arr[5] = {1,1,1,23,1};

    cout << sum(arr, 5) << endl;
}