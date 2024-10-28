// // objective : to use binary search to find an element in a sorted array

// #include <iostream>
// using namespace std;

// int binarySearch(int arr[], int size, int key){
//     int start = 0;
//     int end = size -1;

//     while(start<=end){
//         int mid = (start + end)/2;

//         if(arr[mid] == key){
//             return mid;
//         } 
//         if(arr[mid] < key){
//             start = mid + 1;
//         }
//         if(arr[mid] > key){
//             end = mid - 1;
//         }
//     }
//     return -1;
// }

// int main(){
//     int arr[5] = {3,6,7,12,22};
//     cout << binarySearch(arr, 5, 3) << endl;

// }

//************************************************************************* */






#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int k){
    int start = 0;
    int end = n-1;
    int ans = -1;
    int mid = (start+end)/2;
    while(start<=end){
        

        if(arr[mid] == k){
            ans = mid;
            end = mid -1;
        }

        if(arr[mid] < k){
            start = mid+1;
        }

        if(arr[mid] > k){
            end = mid -1;
        }

        mid = (start+end)/2;
    }
    return ans;
}


int lastOcc(int arr[], int n, int k){
    int start = 0;
    int end = n-1;
    int ans = -1;
    int mid = (start+end)/2;
    while(start<=end){
        

        if(arr[mid] == k){
            ans = mid;
            start = mid +1;
        }

        if(arr[mid] < k){
            start = mid+1;
        }

        if(arr[mid] > k){
            end = mid -1;
        }

        mid = (start+end)/2;
    }
    return ans;
}

int main(){
    int arr[9] = {1,2,3,3,3,3,3,3,5};
    cout << firstOcc(arr, 9, 3) << endl;
    cout << lastOcc(arr, 9, 3) << endl;
}



//testing code*********************************************************************



// pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
// {
    // int start = 0;
    // int end = n-1;

    // int v1 , v2;
    
    // int count = 0;
    // vector <int> answer;
    // while(start <= end){
        
    //     int mid = (start+end) / 2;
    //     if(arr[mid] == k){
    //         // if(arr[mid] == arr[mid+1]){
    //         //     // answer.push_back(arr[mid]);
    //         //     // answer.push_back(arr[mid+1]);
    //         //     //return arr[mid] , arr[mid+1];
    //         //     return make_pair(mid , mid+1);
    //         // }else if(arr[mid] == arr[mid-1]) {
    //         //     // answer.push_back(arr[mid-1]);
    //         //     // answer.push_back(arr[mid]);
    //         //     //return arr[mid-1] , arr[mid];
    //         //     return make_pair(mid-1 , mid);
    //         // }

    //         while(arr[mid -1] = k){
    //             end = mid - 1;
    //             mid = (start + end) / 2;

    //             if(arr[mid -1] < k){
    //                 v1 = mid;
    //             }
    //         }

    //         while(arr[mid + 1] = k){
    //             start = mid + 1;
    //             mid = (start + end) / 2;

    //             if(arr[mid +1] > k){
    //                 v2 = mid;
    //             }
    //         }
    //         return make_pair(v1 , v2);

    //         if(arr[mid] < k){
    //             start = mid + 1;
    //         }
    //         if(arr[mid] > k){
    //             end = mid - 1;
    //         }
    //     }

        


    // }
    // return make_pair(-1 ,-1); 


    //return make_pair(firstOcc(vector<int>& arr, int n, int k),lastOcc(vector<int>& arr, int n, int k));

// pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
// {
    // int start = 0;
    // int end = n-1;

    // int v1 , v2;
    
    // int count = 0;
    // vector <int> answer;
    // while(start <= end){
        
    //     int mid = (start+end) / 2;
    //     if(arr[mid] == k){
    //         // if(arr[mid] == arr[mid+1]){
    //         //     // answer.push_back(arr[mid]);
    //         //     // answer.push_back(arr[mid+1]);
    //         //     //return arr[mid] , arr[mid+1];
    //         //     return make_pair(mid , mid+1);
    //         // }else if(arr[mid] == arr[mid-1]) {
    //         //     // answer.push_back(arr[mid-1]);
    //         //     // answer.push_back(arr[mid]);
    //         //     //return arr[mid-1] , arr[mid];
    //         //     return make_pair(mid-1 , mid);
    //         // }

    //         while(arr[mid -1] = k){
    //             end = mid - 1;
    //             mid = (start + end) / 2;

    //             if(arr[mid -1] < k){
    //                 v1 = mid;
    //             }
    //         }

    //         while(arr[mid + 1] = k){
    //             start = mid + 1;
    //             mid = (start + end) / 2;

    //             if(arr[mid +1] > k){
    //                 v2 = mid;
    //             }
    //         }
    //         return make_pair(v1 , v2);

    //         if(arr[mid] < k){
    //             start = mid + 1;
    //         }
    //         if(arr[mid] > k){
    //             end = mid - 1;
    //         }
    //     }

        


    // }
    // return make_pair(-1 ,-1); 


    //return make_pair(firstOcc(vector<int>& arr, int n, int k),lastOcc(vector<int>& arr, int n, int k));

//     int firstOcc(vector<int>& arr, int n, int k){
//         int start = 0; 
//         int ans = -1;
//         int end  = n-1;
//         int mid = (start + end) /2;
//         while(start <= end){
            
//             if(arr[mid] == k ){
//                 ans = mid;
//                 end = mid-1;
//             }

//             if(arr[mid] < k){
//                 start = mid + 1;
//             }

//             if(arr[mid] > k){
//                 end = mid -1;
//             }

//             mid = (start + end) / 2;
//         }
//         return ans;
//     }

//     int lastOcc(vector<int>& arr, int n, int k){
//         int start = 0; 
//         int ans = -1;
//         int end  = n-1;
//         int mid = (start + end) /2;
//         while(start <= end){
            
//             if(arr[mid] == k ){
//                 ans = mid;
//                 start = mid+1;
//             }

//             if(arr[mid] < k){
//                 start = mid + 1;
//             }

//             if(arr[mid] > k){
//                 end = mid -1;
//             }

//             mid = (start + end) / 2;
//         }
//         return ans;
//     }



//     int first = firstOcc(vector<int>& arr, int n, int k);
//     int last = lastOcc(vector<int>& arr, int n, int k);

//     return make_pair(first, last);
// }
