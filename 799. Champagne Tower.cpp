#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        double val[101][101] = {0.0};
        val[0][0] = poured;

        for(int i=0; i<100; i++){
            for(int j=0; j<=i; j++){
                if(val[i][j] >= 1){
                    val[i+1][j] += (val[i][j] - 1) /2.0;
                    val[i+1][j+1] += (val[i][j] - 1) /2.0;
                    val[i][j] = 1;
                }
            }
        }
        return val[query_row][query_glass];
    }
};

int main()
{
    int poured = 100000009, query_row = 33, query_glass = 17;
    Solution sol;
    double n=sol.champagneTower(poured, query_row, query_glass);
    cout << n;
    
    cout<<endl;
    return 0;
}