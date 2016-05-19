#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     int T;
    cin >> T;
    while(T--){
        int n, k;
        cin >> n >> k;
        vector<int> nums(n, 0);
        int val = 0;
        for(int i=0; i<n; ++i){
            cin >> nums[i];
            val ^= nums[i];
        }
        
        if (val>0)
            cout << "First\n";
        else
            cout << "Second\n";
        
    }
    return 0;
}
