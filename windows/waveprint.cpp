#include <bits/stdc++.h>
#include <iostream>
using namespace std;


vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols){
    // Write your code here
    vector<int> ans;
    bool val = true;

    for(int i = 0; i < mCols; i++){
        if(val){
            for (int j = 0; j < nRows; j++){
                // ans.push_back(arr[i][j]);

                cout << arr[i][j] << " ";
                !val;
            }
        }else{
            for (int j = nRows - 1; j <= 0; j--){
                cout << arr[i][j] << " ";
                !val;
            }
        }
        // cout << endl;
    }

}

int main (){
    //testcase
    //1 2
    //3 4

    vector<vector<int>> arr = {{1,2} , {3,4}};
    int n = 2;
    int m = 2;
    wavePrint()
}