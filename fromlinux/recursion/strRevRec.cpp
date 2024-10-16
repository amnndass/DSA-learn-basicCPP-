#include <iostream>
using namespace std;

string reverse(string& s, int start , int end){
    //base case
    if(start > end){
        return s;
    }

    swap(s[start], s[end]);
    start++;
    end--;

    //recursive call
    return reverse(s, start, end );
}

int main(){
    //todo: reverse a string using recursion

    //string
    string s = "amandas";
    string *p = &s;

    //function
    string output = reverse(*p, 0 , 6);

    //output
    cout << s << endl;
}