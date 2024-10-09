#include <iostream>
using namespace std;

int addfn(int n){
    n = n+1;
    return n;
}

int main(){
    int n = 5;

    //cout << n << endl;

    //cout << &n << endl;

    int *ptr = &n;
    //cout << *ptr << endl;

    int p = addfn(n);
    //cout << p << endl;

    int arr[10];
    arr[2] = 0;
    cout << arr << endl;
    cout << sizeof(*arr) << endl;

    
}