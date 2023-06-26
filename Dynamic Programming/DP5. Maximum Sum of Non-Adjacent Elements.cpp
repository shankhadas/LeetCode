#include<bits/stdc++.h>
using namespace std;

/*--------------------------------------Memoization---------------
    TC: O(N)
    SC: O(N) + O(N)
*/
/* class Solution{
public:
    int func(int ind, vector<int> &arr, vector<int> & dp){
        if(ind == 0) return arr[ind];
        if(ind < 0) return 0;

        if(dp[ind] != -1) return dp[ind];

        int pick = arr[ind] + func(ind-2, arr, dp);
        int not_pick = 0 + func(ind-1, arr, dp);

        return dp[ind] = max(pick, not_pick);
    }
};

int main(){

    vector<int> arr = {2, 1, 4, 9};
    int n = arr.size();
    
    vector<int> dp(n, -1);

    Solution obj;
    int res = obj.func(n-1, arr, dp);
    cout << res << endl;

    return 0;
}*/

/*--------------------------------------Tabulation---------------
    TC: O(N)
    SC: O(N)
*/
/* class Solution{
public:
    int func(int ind, vector<int> &arr, vector<int> &dp){
        dp[0] = arr[0];
        
        for(int i=1; i<ind; i++){
            int pick = arr[i];
            if(i > 1)
                pick += dp[i-2];

            int not_pick = 0 + dp[i-1];

            dp[i] = max(pick, not_pick);
        }
        return dp[ind-1];
    }
};

int main(){

    vector<int> arr = {2, 1, 4, 9};
    int n = arr.size();
    
    vector<int> dp(n, -1);

    Solution obj;
    int res = obj.func(n, arr, dp);
    cout << res << endl;

    return 0;
}*/

/*--------------------------------------Space Optimized---------------
    TC: O(N)
    SC: O(1)
*/
 class Solution{
public:
    int func(int ind, vector<int> &arr){
        int prev = arr[0];
        int prev2 = 0;
        
        for(int i=1; i<ind; i++){
            int pick = arr[i];
            if(i > 1)
                pick += prev2;

            int not_pick = 0 + prev;

            int curri = max(pick, not_pick);
            prev2 = prev;
            prev = curri;
        }
        return prev;
    }
};

int main(){

    vector<int> arr = {2, 1, 4, 9};
    int n = arr.size();

    Solution obj;
    int res = obj.func(n, arr);
    cout << res << endl;

    return 0;
}