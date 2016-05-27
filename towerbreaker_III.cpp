#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int gr[1000000];
vector<int> v;
void grundynumber() {
    gr[1] = 0;
    
    for(int i=2; i<100005; ++i){
        v.clear();
        v.push_back(-1);
        for(int j=1; j<=sqrt(i); ++j){
            if ( i%j==0 ){
                if (j%2!=0) 
                    v.push_back( gr[i/j]);
                if ((i/j)%2!=0)
                    v.push_back( gr[j]);
            }
        }
        
        v.push_back(10000000);
        sort(v.begin(), v.end());
        
        for (int j=1; j<v.size(); ++j){
            if ( abs( v[j]-v[j-1])> 1)
                gr[i] = v[j-1]+1;
        }
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    cin >> T;
    grundynumber();
    while(T--){
        int n;
        cin >> n;
        vector<int> nums(n, 0);
        int val = 0;
        for(int i=0; i<n; ++i){
            cin >> nums[i];
            val ^= gr[nums[i]];            
        }
        if (val>0)
            cout << "1\n";
        else
            cout << "2\n";
    }
    return 0;
}

