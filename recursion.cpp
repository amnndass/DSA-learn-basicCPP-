#include <iostream>
using namespace std;

int power(int n ){

    if(n == 0){
        return 1;
    }

    //cout << n;

    return 2 * power(n-1);

}

void print(int n){
    if(n == 0){
        return;
    }

    print(n-1);
    cout << n << endl;

    
}

int fibonnaci(int n){
    if(n == 0){
        return  0;
    }

    if(n ==1){
        return 1;
    }
    //cout << n << endl;
    int ans = fibonnaci(n-1) + fibonnaci(n-2);

    return ans;
}

int main(){
    
    int n ;
    cin >>n;

    // int ans = power(n);
    // cout << ans << endl;

    // print(n);

    int fib = fibonnaci(n);

    cout << endl;
    cout << endl;
    cout <<fib<< endl;
    
    

}