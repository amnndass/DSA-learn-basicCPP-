#include <iostream>
using namespace std;

bool checkPallindrome(string s, int start, int end){
    
    //base case
    if(start > end){
        return true;
    }



    if(s[start] != s[end]){
        return false;
    }else{
        start++;
        end--;
        return checkPallindrome(s, start, end);
        
    }
    
}

int main(){
    //todo: check if a string is a pallindrome with recursion

    //string
    string s = "aaacbcaaa";

    //function
    if(checkPallindrome(s, 0, s.length()-1)){
        cout << "string is a pllindrome" << endl;
    }else{
        cout << "string is not a pallnidrome" << endl;
    }
}