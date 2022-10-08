#include <bits/stdc++.h>
using namespace std;

/*--------------------------------------Memoization---------------
    TC: O(N)
    SC: O(N) + O(N)
    stack_space + array
*/
/* class Solution{
public:
    int fibonacci(int n, vector<int>& dp){
        if(n <= 1) return 1;
        if(dp[n] != -1) return dp[n];
        return dp[n] = fibonacci(n-1, dp) + fibonacci(n-2, dp);
    }
};

int main(){
    int n = 3;

    vector<int> dp(n+1, -1);
    dp[0] = 1, dp[1] = 1;

    Solution obj;
    int res = obj.fibonacci(n, dp);
    cout << res << endl;

    return 0;
}*/

/*--------------------------------------Tabulation---------------
    TC: O(N)
    SC: O(N) [array]
*/
/* class Solution{
public:
    int fibonacci(int n, vector<int>& dp){
        for(int i=2; i<=n; i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
};

int main(){
    int n = 3;

    vector<int> dp(n+1, -1);
    dp[0] = 1, dp[1] = 1;

    Solution obj;
    int res = obj.fibonacci(n, dp);
    cout << res << endl;

    return 0;
}*/

/*--------------------------------------Space Optimized---------------
    TC: O(N)
    SC: O(1)
*/
 class Solution{
public:
    int fibonacci(int n){
        int prev2 = 1;
        int prev = 1;
        for(int i=2; i<=n; i++){
            int curri = prev + prev2;
            prev2 = prev;
            prev = curri;
        }
        return prev;
    }
};

int main(){
    int n = 3;

    Solution obj;
    int res = obj.fibonacci(n);
    cout << res << endl;

    return 0;
}