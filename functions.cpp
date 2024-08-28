// #include <iostream>
// using namespace std;

// //function that returns if a number is even or odd
// bool isEven(int n){
//     if(n%2 ==0){
//         return true;
//     }
//     else{
//         return false;
//     }

// }

// int main(){

//     bool answer = isEven(6);
//     cout << answer << endl;
    

//     return 0;
// }








//writing a function that returns nCr
// nCr = n!/c!(n-r)!

// #include <iostream>
// using namespace std;

// //function that finds the factorial
// int factorial(int n){
//     int fact = 1;
//     for(int i = 1; i<=n; i++){
//         fact = fact * i;
//     }
//     return fact;
// }

// int nCr(int n ,int r){
//     int numerator = factorial(n);
//     int denominator = factorial(r) * factorial(n-r);

//     return numerator/denominator;
// }

// int main(){
//     int n,r;

//     cin>>n;
//     cin>>r;

//     cout << nCr(n , r) << endl; 


//     return 0;
// }





//a functions that tells if a number is prime

#include <iostream>
using namespace std;

bool isPrime(int n){
    for(int i = 2; i<n; i++){
        // not a prime number
        if(n%i==0){
            return 0;
            
        }

    }
    return 1;
    
}


int main(){
    int n;
    cin>>n;
    cout << isPrime(n) << endl;
    return 0;
}