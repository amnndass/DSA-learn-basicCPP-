#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool check(int a[], int b[]){
    for(int i = 0; i<26; i++){
        if(a[i] != b[i]){
            return false;
        }
    }
}


//remove duplicates

string removeDuplicates(string s) {
        
        while(s.length() > 1){
            for(int i = 0; i<s.length()-1; i++){
                if(s[i] == s[i+1]){
                    s.erase(i,2);
                }
            }
        }

        return s;
    }


int main(){
//     string s = "abcdef";
//     string t = "abcdef";
//     char song[] = "this is it";
//     char songs[] = "thi";
//     int len = s.length();
//    // cout << strcpy(songs,song) << endl;

//     cout << s.find("a") << endl;

    string s1 = "ab";
    string s2 = "eidbaooo";

    int count1[26] = {0};
    
    for(int i = 0; i<s1.length(); i++){
        int index = s1[i] -'a';
        count1[index]++;
    }
    

    // int i = 0;
    // while(i<s1.length()){
    //     int count2[26] = {0};
        
    //     for(i; i<s1.length(); i++){
    //         int index = s2[i] - 'a';
    //         count2[index]++;
    //     }
    //     if(check(count1, count2)){
    //         return true;
    //     }
    //     i++;

    // }
    // return false;



    //next question


    s2.erase(1,2);
    cout << s2 << endl;


    // cout << "someting" << endl;
    // cout << removeDuplicates(s1) << endl;
    // cout << "someting" << endl;


}