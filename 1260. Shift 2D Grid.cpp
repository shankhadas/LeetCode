#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> res (m, vector<int>(n));
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                int newi = (i+(j+k)/n)%m;
                int newj = (j+k)%n;
                res[newi][newj] = grid[i][j];
            }
        }
        return res;
    }
};

int main()
{
    vector<vector<int>> grid = {{1,2,3},{4,5,6},{7,8,9}};
    int k = 1;
    for(int i=0; i<grid.size(); i++){
        for(int j=0; j<grid[0].size(); j++){
            cout << grid[i][j] << " ";
        }
        cout<<endl;
    }
    cout<<endl;

    Solution sol;
    vector<vector<int>> res=sol.shiftGrid(grid, k);
    for(int i=0; i<res.size(); i++){
        for(int j=0; j<res[0].size(); j++){
            cout << res[i][j] << " ";
        }
        cout<<endl;
    }
    // cout << n << " ";
    
    cout<<endl;
    return 0;
}