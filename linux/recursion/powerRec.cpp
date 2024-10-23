#include <iostream>
using namespace std;

int findPower(int a, int b){
    cout << "iteration" << " " << a << " " << b <<endl;
    if(b == 1){
        return a;
    }

    return a*findPower(a, b-1);
}

int main(){
    //todo: find a to the power of b with recursion
    int a, b;

    //input
    cout << "enter number" << endl;
    cin >> a;
    cout << "enter power" << endl;
    cin >> b;

    //output
    cout << findPower(a,b) << endl;
}