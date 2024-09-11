#include <iostream>

#include <bits/stdc++.h>
using namespace std;



pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int start = 0;
    int end = n-1;

    int v1 , v2;
    
    int count = 0;
    vector <int> answer;
    while(start <= end){
        
        int mid = (start+end) / 2;
        if(arr[mid] == k){
            // if(arr[mid] == arr[mid+1]){
            //     // answer.push_back(arr[mid]);
            //     // answer.push_back(arr[mid+1]);
            //     //return arr[mid] , arr[mid+1];
            //     return make_pair(mid , mid+1);
            // }else if(arr[mid] == arr[mid-1]) {
            //     // answer.push_back(arr[mid-1]);
            //     // answer.push_back(arr[mid]);
            //     //return arr[mid-1] , arr[mid];
            //     return make_pair(mid-1 , mid);
            // }

            while(arr[mid -1] = k){
                end = mid - 1;
                mid = (start + end) / 2;

                if(arr[mid -1] < k){
                    v1 = mid;
                }
            }

            while(arr[mid + 1] = k){
                start = mid + 1;
                mid = (start + end) / 2;

                if(arr[mid +1] > k){
                    v2 = mid;
                }
            }
            return make_pair(v1 , v2);
        }

        if(arr[mid] < k){
            start = mid + 1;
        }
        if(arr[mid] > k){
            end = mid - 1;
        }


    }
    return make_pair(-1 ,-1); 
}

int main(){
    //vector <int> arr = {0 ,0, 1, 1, 2, 2, 2, 2};
    //firstAndLastPosition(arr , 8 , 2);

    int arr[5] = {0,4,5,7,8};
    //arr.size();

    cout << sizeof(arr)/sizeof(int) << endl;

    int end = arr[1];
    int max = sizeof(arr)/sizeof(int) - end;
    cout << max << endl;

    return 0;
}