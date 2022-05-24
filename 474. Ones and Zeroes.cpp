#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<int>> dp(m + 1, vector<int>(n + 1));
        for(auto& s : strs) { 
            int zeros = count(s.begin(), s.end(), '0');
            int ones = s.size();
            for(int i = m; i >= zeros; i--) 
                for(int j = n; j >= (ones - zeros); j--) 
                    dp[i][j] = max(dp[i][j], 1 + dp[i - zeros][j - ones + zeros]);
        }
        return dp[m][n];
    }
};

int main()
{
    vector<string> strs = {"10","0001","111001","1","0"};
    int m = 5, n = 3;

    Solution sol;
    int res=sol.findMaxForm(strs, m, n);
    
    cout<<res << " ";
    
    cout<<endl;
    return 0;
}