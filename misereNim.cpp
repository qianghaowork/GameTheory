#include <cmath>
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
        
        int maxn = 0;
        for(auto &n:nums){ 
            maxn = maxn < n ? n : maxn;
        }
        if ( (maxn>1&& val==0) || (maxn==1&& val>0))
            cout << "Second\n";
        else 
            cout << "First\n";
    }
    return 0;
}

