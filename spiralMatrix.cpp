#include <bits/stdc++.h>
#include <iostream>
using namespace std;


vector<int> spiralPathMatrix(vector<vector<int>> matrix, int n, int m) {
    // Write your code here.

    vector<int> ans;

    int total = n*m;
    int count = 0;
    int startRow = 0;
    int endRow = n-1;
    int startCol = 0;
    int endCol = m-1;

    while(count < total){
        for(int i = startCol; i<=endCol; i++){
            ans.push_back(matrix[startRow][i]);
            count++;
        }
        startRow++;

        for(int i = startRow; i<=endRow; i++){
            ans.push_back(matrix[i][endCol]);
            count++;
        }
        endCol--;

        for(int i = endCol; i>=startCol; i--){
            ans.push_back(matrix[endRow][i]);
            count++;
        }
        endRow--;

        for(int i = endRow; i>=startRow; i--){
            ans.push_back(matrix[i][startCol]);
            count++;
        }
        startCol++;
    }

    for(int i = 0; i<ans.size(); i++){
        cout << ans[i] << " ";
    } 
    cout << endl;
    
}


int main(){


    //testcases
    // 2 6
    // 1 2 3 4 5 6
    // 6 5 4 3 2 1

    int n = 2;
    int m = 6;
    vector<vector<int>> arr = {{1 ,2, 3, 4, 5, 6}, {6, 5, 4, 3, 2, 1}};
    spiralPathMatrix(arr, n, m);
}

