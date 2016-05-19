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
        int N, M;
        cin >> N >> M;
        vector<int> towers(N, M);
        if (M==1)
            cout << 2 << endl;
        else if ( N % 2==0)
            cout << 2 << endl;
        else
            cout << 1 << endl;
        
    }
    return 0;
}
