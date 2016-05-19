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
    bool matrix[16][16] = {false};
    for(int i=2; i<16; ++i)
    {
        int k = i;
        for(int j=1; k>=1; --k, ++j)
        {
            if (j<3 && k<3 )
                matrix[j][k] = false;
            else if (j==1 && k>2)
                matrix[j][k] = ! matrix[j+1][k-2]; 
            else if (j<3 && k>2 )
                matrix[j][k] =  !( matrix[j+1][k-2] && matrix[j-1][k-2]);
            else if (k==1 && j>2)
                matrix[j][k] = ! matrix[j-2][k+1];
            else if (k<3 && j>2 )
                matrix[j][k] = !(matrix[j-2][k-1] && matrix[j-2][k+1]);
            else if (k<=14 && j<=14)
               matrix[j][k] = !(matrix[j-2][k+1] && matrix[j-2][k-1] && matrix[j+1][k-2] && matrix[j-1][k-2]);
            else if (k<=14)
                matrix[j][k] = !(matrix[j-2][k+1] && matrix[j-2][k-1]&& matrix[j-1][k-2]);
            else if (j<=14)
                matrix[j][k] = !( matrix[j-2][k-1] && matrix[j+1][k-2] && matrix[j-1][k-2]);
            else
                matrix[j][k] = !( matrix[j-2][k-1] && matrix[j-1][k-2]);
        }
    }
    for(int i=2; i<16; ++i){
        int k = i;
        for(int j=15; k<16; --j, ++k){
            if(j<3 )
                matrix[j][k] = !(matrix[j-1][k-2] && matrix[j+1][k-2]);
            else if (k<3)
                matrix[j][k] = !(matrix[j-2][k-1] && matrix[j-2][k+1]);
            if ( k<=14 && j<=14 )
               matrix[j][k] = !(matrix[j-2][k+1] && matrix[j-2][k-1] && matrix[j+1][k-2] && matrix[j-1][k-2]);
            else if (k<=14)
                matrix[j][k] = !(matrix[j-2][k+1] && matrix[j-2][k-1]&& matrix[j-1][k-2]);
            else if (j<=14)
                matrix[j][k] = !( matrix[j-2][k-1] && matrix[j+1][k-2] && matrix[j-1][k-2]);
            else
                matrix[j][k] = !( matrix[j-2][k-1] && matrix[j-1][k-2]); 
            
        }
    }
    while(T--){
        int x,y;
        cin >> x >> y;
        
        if (matrix[x][y])
            cout << "First\n";
        else
            cout << "Second\n";
    }
    return 0;
}

