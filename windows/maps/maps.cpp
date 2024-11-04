#include <unordered_map>
#include <iostream>
using namespace std;



int main(){
    unordered_map<int, int> mp;

    mp[1] = 200;

    cout << mp[1] << endl;

    if(mp.count(2) > 0){
        cout << "something" << endl;
    }else{
        cout << "no" << endl;
    }
}