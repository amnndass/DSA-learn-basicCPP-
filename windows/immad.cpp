#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


long long appleAndCoupon(int n, int m, vector<int> arr){
    // Write your code here.

    sort(arr.begin(), arr.end());

    long long ans =0;
    int free = arr[m];
    //cout << arr[2] << endl;
    //int free = arr[n-1];

    if(n ==2){
        for(int i = 1; i<arr.size()+1; i++){

          if (i == m) {
            continue;
          }
          ans += arr[i];
        }
    }else{
        for(int i = 0; i<arr.size(); i++){
            ans = arr[i] + ans;
            //cout << free << endl;
 
        }
        return ans - free;
    }
    return ans - free;
}
int main(){
    vector<int> arr = {2, 3, 1, 5 };
    int n =4;
    int m = 2;
    cout << appleAndCoupon(n,m,arr) << endl;
}