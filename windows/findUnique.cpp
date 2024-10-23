#include <iostream>
using namespace std;

#include <bits/stdc++.h>

int singleEle(int arr[], int len){
    
    for(int i = 0; i<len; i++){
        int count = 0;
        for(int y = 0; y<len; y++){
            
            if(arr[i] == arr[y]){
                count++;
            }

        }
        if(count < 2){
            return arr[i];
        }
    }
}

int main(){
    // int arr[7] = {1,3,5,5,3,1,11};

    // cout << singleEle(arr, 7) << endl;

    // int a = 10;
    // int b = 10;
    
    // int c = a^b;
    // int d = c^a;
    // std::cout << d << std::endl;

    // int arr[6] =;
    // vector <int> sh = {1,2,2,1,1,3,1,2,2,1,1,3,1,2,2,1,1,3,1,2,2,1,1,3,1,2,2,1,1,3,1,2,2,1,1,3,1,2,2,1,1,3,1,2,2,1,1,3,1,2,2,1,1,3,1,2,2,1,1,3,1,2,2,1,1,3,1,2,2,1,1,3,1,2,2,1,1,3,1,2,2,1,1,3,1,2,2,1,1,3,1,2,2,1,1,3,1,2,2,1,1,3,1,2,2,1,1,3,1,2,2,1,1,3,1,2,2,1,1,3,1,2,2,1,1,3,1,2,2,1,1,3,1,2,2,1,1,3};

    // sort(sh.begin() , sh.end());

    // for(int i = 0; i<sh.size(); i++){
    //     cout << sh[i] << endl;
    // }

    vector<int> nw;
    //vector <int> vec{26,2,16,16,5,5,26,2,5,20,20,5,2,20,2,2,20,2,16,20,16,17,16,2,16,20,26,16};
    vector <int> vec{26,2};

    sort(vec.begin(), vec.end());

    // for(int i = 0; i<vec.size(); i++){
    //     cout << vec[i] << endl;
    // }
    

    int i = 0;
    while(i<vec.size()){
        int count = 0; 
        for(int y = 0; y<vec.size(); y++){
            if(vec[i] == vec[y]){
                count++;
            }
        }
        nw.push_back(count);
        i = i+count;

    }

    sort(nw.begin(), nw.end());
    for(int i = 0; i<nw.size(); i++){
        cout << nw[i] << endl; 
    }

    for(int i =0 ; i<(nw.size() - 1) ; i++){
        cout << nw[i] ;
        if(nw[i] == nw[i+1]){
            cout << "equal" << endl;
        }
    }
    cout << "here" << endl;

    return 0;
}




//leetcode 402
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        std::set<int> answer;
        sort(nums.begin(), nums.end());
        for(int i = 0; i<nums.size(); i++){
            int count  =0;
            for(int y = 0; y<nums.size(); y++){
                if(nums[y] == nums[i]){
                    count++;
                }
                
            }
            if(count==2){
                answer.insert(nums[i]);
                
            }

        }
        // vector<int> news;
        // for(int i = 0 ; i<answer.size(); i++){
        //     news.push_back(answer[i]);
        // }
        // return news;
        
        return answer;

    }
};