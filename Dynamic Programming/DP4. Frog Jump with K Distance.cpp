#include<bits/stdc++.h>
using namespace std;

/*--------------------------------------Memoization---------------
    TC: O(N * k)
    SC: O(N) + O(N)
*/
/* class Solution{
public:
    int func(int ind, int k, vector<int>& heights, vector<int>& dp){
        if(ind == 0) return 0;
        if(dp[ind] != -1) return dp[ind]; 
        int min_step = INT_MAX;
        for(int j=1; j<=k; j++){
            if(ind-j >= 0){
                int jump = func(ind-j, k, heights, dp) + abs(heights[ind] - heights[ind-j]);
                min_step = min(jump, min_step);
            }
        }
        return dp[ind] = min_step;
    }

    int frogJump(int n, int k, vector<int>& heights){
        vector<int> dp(n, -1);
        return func(n-1, k, heights, dp);
    }
};

int main(){

    vector<int> heights = {10, 20, 30, 10};
    int n = heights.size();
    int k =2;

    Solution obj;
    int res = obj.frogJump(n, k, heights);
    cout << res << endl;

    return 0;
}*/

/*--------------------------------------Tabulation---------------
    TC: O(N * k)
    SC: O(N) [array]
*/
 class Solution{
public:
    int frogJump(int n, int k, vector<int>& heights){
        vector<int> dp(n, -1);
        dp[0] = 0;
        for(int i=1; i<n; i++){
            int min_step = INT_MAX;
            for(int j=1; j<=k; j++){
                int jump = dp[i-j] + abs(heights[i] - heights[i-j]);
                min_step = min(min_step, jump);
            }
            dp[i] = min_step;
        }
        return dp[n-1];
    }
};

int main(){

    vector<int> heights = {10, 20, 30, 10};
    int n = heights.size(), k = 2;

    Solution obj;
    int res = obj.frogJump(n, k, heights);
    cout << res << endl;

    return 0;
}