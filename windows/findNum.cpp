#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findNum(vector<int>&a, int n){
	long long num = 0;
	double x = n;
	for(int i = 0; i<n; i++){
		num = a[i] * pow(10.0, x - i-1) + num;
	}
    return num;
}

int main(){

    vector<int> num = {1,2,3,4};

    //cout << findNum(num, 4) << endl;

    
    // int i  = 0;

    // while(ans > 0){
    //     cout << "here" << endl;
    //     answer[i] = ans%10;
    //     ans = ans /10;
    //     i++;
    // }

    // for(int i = 0; i<answer.size(); i++){
    //     cout << answer[i] << " ";
    // }
    // cout << endl;

    int n = 1234;
    vector<int> answer[4];
    int i = 0;

    cout << n%10 << endl;
    //answer[i] = n/10;
    cout << n%10 << endl;

    //cout << answer[0] << endl;

    return 0;
}