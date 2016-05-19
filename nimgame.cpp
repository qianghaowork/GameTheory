nclude <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
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

