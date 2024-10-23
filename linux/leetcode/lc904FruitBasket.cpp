#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int totalFruit(vector<int>& fruits) {
    // int arr[10] = {0};

    // for(int i = 0; i<fruits.size(); i++){
    //     int x = fruits[i];
    //     arr[x]++;
    // }

    // sort(arr, arr+10);
    // return arr[8] + arr[9];


    //second approcah

    // int maxLen = 0;
    

    // for(int i = 0; i<fruits.size(); i++){
    //     set<int> st;

    //     for(int j = i; j<fruits.size(); j++){
    //         st.insert(fruits[j]);

    //         if(st.size() <= 2){
    //             maxLen = max(maxLen, j-i+1);
    //         }else{
    //             break;
    //         }
    //     }
    // }

    // return maxLen;

    //optimised approach

    int right = 0;
    int left = 0;
    int maxLen = 0;

    set<int> st;

    while(right < fruits.size()){
        int currentElement = fruits[right];

        st.insert(currentElement);
        
        if(st.size() <= 2){
            maxLen = max(maxLen, right-left+1);
        }

        if(st.size() > 2){
            
        }
    }

    return maxLen;
}


int main(){
    vector<int> arr = {0,1,2,2};

    int ans = totalFruit(arr);

    cout << ans << endl;

}