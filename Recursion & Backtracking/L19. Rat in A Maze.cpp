#include <bits/stdc++.h>

using namespace std;

/*
    TC: O(4^(m*n)), because on every cell we need to try 4 different directions.
    SC: O(m*n) ,Maximum Depth of the recursion tree(auxiliary space).
*/
                            
class Solution {
public:
    void solve(int i, int j, vector<vector<int>>& m, int n, vector<string>& res, string move, vector<vector<int>>& vis, int di[], int dj[]){
        if(i==n-1 && j==n-1){
            res.push_back(move);
            return;
        }
        string dir = "DLRU";
        for(int idx=0; idx<4; idx++){
            int nexti = i + di[idx];
            int nextj = j + dj[idx];
            if(nexti >= 0 && nextj >= 0 && nexti < n && nextj < n && !vis[nexti][nextj] && m[nexti][nextj] == 1){
                vis[i][j] = 1;
                solve(nexti, nextj, m, n, res, move+dir[idx], vis, di, dj);
                vis[i][j] = 0;
            }
        }
    }

    vector<string> findPath(vector<vector<int>>& m, int n){
        vector<string> res;
        vector<vector<int>> vis(n, vector<int>(n, 0));
        int di[] = {+1, 0, 0, -1};
        int dj[] = {0, -1, +1, 0};
        if(m[0][0] == 1)
            solve(0, 0, m, n, res, "", vis, di, dj);
        return res;
    }
};

int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    // #endif
    int n = 4;
    vector<vector<int>> m = {{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};

    Solution sol;
    vector<string> ans = sol.findPath(m, n);
    for(int i=0; i<ans.size(); i++)
        cout << ans[i] << " ";
            
    cout<<endl;
    return 0;
}