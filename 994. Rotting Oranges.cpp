#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        if(grid.empty())
            return 0;
        int m = grid.size(), n = grid[0].size(), total = 0, days = 0, count = 0;
        queue<pair<int, int>> rotten;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] != 0)
                    total++;
                if(grid[i][j] == 2)
                    rotten.push({i, j});
            }
        }

        int dx[] = {1, -1, 0, 0};
        int dy[] = {0, 0, 1, -1};

        while(!rotten.empty()){
            int k = rotten.size();
            count += k;
            while(k--){
                int x = rotten.front().first;
                int y = rotten.front().second;
                rotten.pop();
                for(int i=0; i<4; i++){
                    int nx = x + dx[i];
                    int ny = y + dy[i];
                    if(nx<0 || nx>=m || ny<0 || ny>=n || grid[nx][ny] != 1)
                        continue;
                    grid[nx][ny] = 2;
                    rotten.push({nx, ny});
                }
            }
            if(!rotten.empty())
                days++;
        }
        return total == count ? days : -1;
    }
};

int main()
{
    vector<vector<int>> grid = {{2,1,1},{0,1,1},{1,0,1}};
    
    Solution sol;
    int res =sol.orangesRotting(grid);

    cout << res << " ";
    
    cout<<endl;
    return 0;
}