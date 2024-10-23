#include <iostream>
using namespace std;

int findPower(int a , int b ){
    cout << "iteration" << " " << a << " " << b <<endl;
    if(b == 1){
        return a;
    }

    if(b%2==0){
        return findPower(a,b/2) * findPower(a, b/2);
    }else{
        return a * findPower(a, (b-1)/2) * findPower(a, (b-1)/2);
    }


}

int main(){
    //todo: find a to the power b in a optimised approcah

    //declaration && input
    int a , b;
    cout << "enter number" << endl;
    cin>>a;

    cout << "enter power" << endl;
    cin>>b;

    //output
    cout << findPower(a,b) << endl;
}