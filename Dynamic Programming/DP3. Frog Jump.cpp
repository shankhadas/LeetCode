#include<bits/stdc++.h>
using namespace std;

/*--------------------------------------Memoization---------------
    TC: O(N)
    SC: O(N) + O(N)
*/
/* class Solution{
public:
    int func(int ind, vector<int>& heights, vector<int>& dp){
        if(ind == 0) return 0;
        if(dp[ind] != -1) return dp[ind]; 
        int left = func(ind-1, heights, dp) + abs(heights[ind] - heights[ind-1]);
        int right = INT_MAX;
        if(ind > 1)
            right = func(ind-2, heights, dp) + abs(heights[ind] - heights[ind-2]);
        return dp[ind] = min(left, right);
    }

    int frogJump(int n, vector<int>& heights){
        vector<int> dp(n+1, -1);
        return func(n, heights, dp);
    }
};

int main(){
    int n = 4;
    vector<int> heights = {10, 20, 30, 10};

    Solution obj;
    int res = obj.frogJump(n, heights);
    cout << res << endl;

    return 0;
}*/

/*--------------------------------------Tabulation---------------
    TC: O(N)
    SC: O(N) [array]
*/
/* class Solution{
public:
    int frogJump(int n, vector<int>& heights){
        vector<int> dp(n+1, -1);
        dp[0] = 0;
        for(int i=1; i<=n; i++){
            int fs = dp[i-1] + abs(heights[i] - heights[i-1]);
            int ss = INT_MAX;
            if(i > 1) ss = dp[i-2] + abs(heights[i] - heights[i-2]);
            dp[i] = min(fs, ss);
        }
        return dp[n];
    }
};

int main(){
    int n = 4;
    vector<int> heights = {10, 20, 30, 10};

    Solution obj;
    int res = obj.frogJump(n, heights);
    cout << res << endl;

    return 0;
}*/

/*--------------------------------------Space Optimized---------------
    TC: O(N)
    SC: O(1)
*/

class Solution{
public:
    int frogJump(int n, vector<int>& heights){
        int prev2 = 0;
        int prev = 0;
        for(int i=0; i<n; i++){
            int fs = prev + abs(heights[i] - heights[i-1]);
            int ss = INT_MAX;
            if(i > 1) fs = prev2 + abs(heights[i] - heights[i-2]);

            int curri = min(fs, ss);
            prev2 = prev;
            prev = curri;
        }
        return prev;
    }
};

int main(){
    int n = 4;
    vector<int> heights = {10, 20, 30, 10};

    Solution obj;
    int res = obj.frogJump(n, heights);
    cout << res << endl;

    return 0;
}