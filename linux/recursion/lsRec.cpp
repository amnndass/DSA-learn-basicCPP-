#include <iostream>
using namespace std;

bool isPresent(int arr[], int size, int key){
    //base case
    if(size == 0){
        return false;
    }

    if(*arr == key){
        return true;
    }else{
        return isPresent(arr+1, size-1, key);
    }
}

int main(){
    //todo: linear search using recursion

    //array
    int arr[6] = {1,2,3,4,5,6};

    //function
    if(isPresent(arr, 6, 7)){
        cout << "present" << endl;
    }else{
        cout << "not present" << endl;
    }
}