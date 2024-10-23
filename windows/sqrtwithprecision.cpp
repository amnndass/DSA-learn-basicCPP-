#include <iostream>
using namespace std;

int findSqrt(int n){
    int start =0;
    int end = n; 
    int mid = start + (end-start)/2;
    int ans = -1;

    if(n==1 || n==0){
        return n;
    }
    while(start<=end){
        long long square = mid * mid;
        if(square == n){
            return mid;
        }
        if(square > n){
            end = mid -1;
        }
        if(square < n){
            ans = mid;
            start = mid + 1; 
        }
        mid = start + (end -start)/2;

    }
    return ans;
}

float addPrecision(int root, int n, int pre){
    float decimal = 1;

    for()
}

int main(){
    
    int n;
    cout << "enter number" << endl;
    cin>>n;

    cout << findSqrt(n) << endl;

}