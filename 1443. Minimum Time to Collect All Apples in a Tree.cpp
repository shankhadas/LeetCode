#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
/*
Time complexity: O(N)
Space complexity: O(N)
*/
    int dfs(int node, int parent, vector<vector<int>>& adj, vector<bool>& hasApple) {
        int totalTime = 0, childTime = 0;
        for (auto child : adj[node]) {
            if (child == parent) 
                continue;
            childTime = dfs(child, node, adj, hasApple);
            // childTime > 0 indicates subtree of child has apples. Since the root node of the
            // subtree does not contribute to the time, even if it has an apple, we have to check it
            // independently.
            if (childTime || hasApple[child]) 
                totalTime += childTime + 2;
        }

        return totalTime;
    }

    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        vector<vector<int>> adj(n);
        for (auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        return dfs(0, -1, adj, hasApple);
    }
};
 
int main()
{
    int n = 7;
    vector<vector<int>> edges = {{0,1},{0,2},{1,4},{1,5},{2,3},{2,6}};
    vector<bool> hasApple = {false,false,true,false,true,true,false};

    Solution sol;
    cout << sol.minTime(n, edges, hasApple) << "\n";
        
    cout<<endl;

    return 0;
}