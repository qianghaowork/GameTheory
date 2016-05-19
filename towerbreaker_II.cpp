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
    const int maxlen = 1e6+5;
    int factors[maxlen] = {0};
    int sign[maxlen] = {0};
    for(int i=2; i<maxlen; ++i){
        if(sign[i]==0){
            for(int j=i; j<maxlen; j+=i){
                int val = j;
                sign[j] = 1;
                while(val%i==0){
                    val = val/i;
                    factors[j]++;
                }
            }
        }
    }
    
    while(T--){
        int n;
        cin >> n;
        vector<int> nums(n, 0);
        int val = 0;
        for(int i=0; i<n; ++i){
            cin >> nums[i];
            val ^= factors[nums[i]];            
        }
        if (val>0)
            cout << "1\n";
        else
            cout << "2\n";
    }
    return 0;
}

