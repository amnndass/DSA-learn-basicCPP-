#include <iostream>
using namespace std;

bool isPresent(int arr[][3], int k, int l, int target){
    for(int i = 0; i<k; i++){
        for(int j = 0; j<l; j++){
            if(arr[i][j] == target){
                return true;
            }
        }

    }
    return false;
}


void printRowSum(int arr[][3] , int k, int l){
    for(int i = 0; i<k; i++){
        int sum = 0;
        for(int j = 0; j<l; j++){
            sum += arr[i][j];
        }
        cout << sum << endl;

    }
}

int main(){
    int arr[3][3];

    for(int i  =0; i<3; i++){
        for(int j =0; j<3; j++){
            cin >> arr[i][j];
        }
        //cout << endl;
    }

    for(int i  =0; i<3; i++){
        for(int j =0; j<3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int target;
    cout << "enter number to search" << endl;
    
    cin >> target;
    cout << endl;

    if(isPresent(arr, 3,3, target)){
        cout << "present" << endl;
    }else{
        cout << "not Present" << endl;
    }

    cout << "sum :" << endl;
    printRowSum(arr, 3,3);


}