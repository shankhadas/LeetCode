#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        //dp with coins as rows and amount as columns
        vector<vector<int>> dp(coins.size() + 1, vector<int>(amount + 1, 0));
        
        for(int i = 0; i <= coins.size(); i++){
            for(int j = 0; j <= amount; j++){
                if(j == 0)
                    dp[i][j] = 0;
                else if(i == 0)
                    dp[i][j] = 1e5;
                else if(coins[i - 1] > j)
                    dp[i][j] = dp[i - 1][j];
                else
                    dp[i][j] = min(1 + dp[i][j - coins[i-1]], dp[i - 1][j]);
            }
        }
        int ans = dp[coins.size()][amount];
        if(ans > 1e4)
            return -1;
        return ans;
    }
};

int main()
{
    vector<int> coins = {1,2,5};
    int amount = 11;

    Solution sol;
    int res=sol.coinChange(coins, amount);
    cout << res << " ";
    
    cout<<endl;
    return 0;
}