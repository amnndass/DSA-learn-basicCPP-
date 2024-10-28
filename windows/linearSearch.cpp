#include <iostream>
using namespace std;

bool search(int arr[], int key, int length){
    //element found returns true
    for(int i=0; i<length; i++){
        if(arr[i] == key){
            return true;
        }
        
    }
    return false;
}

int main(){
    int arr[10] = {1,53,342,3423,43,-434,44,4,2,9};

    for(int i =0; i<10; i++){
        cout << arr[i] << " " ;
    }
    cout << endl;

    int key;
    cout << "enter value to search" << endl;
    cin>>key;

    if(search(arr, key , 10)){
        cout << "element found" << endl;
    }else{
        cout << "element not found" << endl;
    }
}