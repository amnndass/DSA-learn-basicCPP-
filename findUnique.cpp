#include <iostream>
using namespace std;

int singleEle(int arr[], int len){
    
    for(int i = 0; i<len; i++){
        int count = 0;
        for(int y = 0; y<len; y++){
            
            if(arr[i] == arr[y]){
                count++;
            }

        }
        if(count < 2){
            return arr[i];
        }
    }
}

int main(){
    int arr[7] = {1,3,5,5,3,1,11};

    cout << singleEle(arr, 7) << endl;

    return 0;
}