#include <iostream>
using namespace std;

bool isSorted(int arr[], int size){
    if(size == 1 || size == 0){
        return true;
    }

    if(arr[0] > arr[1]){
        return false;
    }else{
        return isSorted(arr+1, size-1);
    }
}

int main(){
    //todo : check if array is sorted using recursion

    //array
    int arr[6] = {3,4,5,6,7,8};

    //function
    if(isSorted(arr, 6)){
        cout << "sorted" << endl;
    }else{
        cout << "not sorted" << endl;
    }

}