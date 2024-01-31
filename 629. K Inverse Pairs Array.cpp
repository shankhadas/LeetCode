//
// Created by das on 27/1/24.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int kInversePairs(int n, int k) {
        int dp[1001][1001] = {};

        for(int i = 1 ; i<= n ;i++){
            for(int j = 0 ; j<=k ; j++){
                if(j==0)dp[i][j]=1;
                else{
                    for(int p = 0 ; p<=min(i-1,j);p++){
                        dp[i][j] = (dp[i][j]+dp[i-1][j-p]) % 1000000007;
                    }
                }
            }
        }
        return dp[n][k];
    }
};

int main() {
    int n = 3, k = 0;

    Solution sol;
    int res=sol.kInversePairs(n, k);

    cout << res << endl;

    cout<<endl;
    return 0;
}