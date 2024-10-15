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

    int *x = arr;
    cout << &x << endl;

    char ch[5] = "abcd";

    cout << ch << endl;

    int arr2[] = {1,2,4,5};
    

    cout << "here" << endl;

    char chs = 'c';
    chs++;
    cout << chs << endl;
    printf("%c", chs);

    char s[5] = "abcd";

    char *poin = s;
    
    cout << poin << endl;
    

    char *chp = new char;
    cout << chp << endl;
    delete chp;

    cout << "this is line " << __DATE__ << endl;

    
}