#include <bits/stdc++.h>
#include <iostream>

using namespace std;

class Solution
{
    char getOccurences(string s){
        int arr[26] = {0};
        
        for(int i = 0; i<s.length(); i++){
            int num = 0;
            num = s[i] -'a';
            arr[num]++;
        }
        
        
        int max = -1; 
        int ans = 0;
        for(int i =0; i<26; i++){
            if(max < arr[i]){
                max = arr[i];
                ans = i;
            }
        }
        
        return ans+'a';
    }
    
    
    
    
    
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        
        char ans = getOccurences(str);
        return ans;
    }

};