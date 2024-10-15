#include <iostream>
using namespace std;

bool isSorted(int *arr, int size){
    if(size == 1 || size == 0){
        return true;
    }

    if(arr[0] > arr[1]){
        return false;
    }else{
        bool ans = isSorted(arr+1, size-1);
        return ans;
    }
}

int main(){
    int arr[6] = {1,2,3,554,554,554};

    if(isSorted(arr, 6)){
        cout << "array is sorted" << endl;
    }else{
        cout << "array is not sorted" << endl;
    }
}