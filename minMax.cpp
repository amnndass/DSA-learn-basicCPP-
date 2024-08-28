//function that returns the minimum and maximum value from an array

#include <iostream>
using namespace std;

int minValue(int arr[] , int length){
    int min = INT16_MAX;
    int result;
    for(int i=0; i<length; i++){
        if(arr[i]<min){
            result = arr[i];
            min = arr[i];
        }
        
    }
    return result;
}


int maxValue(int arr[] , int length){
    int max = INT16_MIN;
    int result;
    
    for(int i=0; i<length; i++){
        if(arr[i]>max){
            result = arr[i];
            max = arr[i];
        }
        
    }
    return result;
}

int main(){

    int size;
    cin>>size;

    int num[100];

    for(int i=0; i<size; i++){
        cout << "enter" << endl;
        cin>>num[i];
    }

    // for(int i = 0; i<size; i++){
    //     cout << num[i];
    // }
    //cout << endl;

    cout << "minimum value is: " << minValue(num, size) << endl;
    cout << "maximum value is: " << maxValue(num, size) << endl;
    

    
}