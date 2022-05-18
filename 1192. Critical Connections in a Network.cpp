#include <bits/stdc++.h>

using namespace std;
// search "find bridges graph" in youtube or google to understand algorithm, that is easiest way.
class Solution {
public:
    vector<vector<int>> ans;
	vector<vector<int>> graph;

	vector<int> firstTime, minTime, visited;
	int time = 1;

	void dfs(int node, int parent = -1) {
		firstTime[node] = minTime[node] = time++;
		visited[node] = true;

		for(auto& child : graph[node]) {
			if(child == parent)
				continue;

			if(!visited[child]) 
				dfs(child, node);

			minTime[node] = min(minTime[child], minTime[node]);

			if(firstTime[node] < minTime[child])
				ans.push_back({node, child});
		}
	}

	vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
		firstTime.resize(n), minTime.resize(n), visited.resize(n), graph.resize(n);
		for(auto& edge : connections) {
			int nodeA = edge[0], nodeB = edge[1];
			graph[nodeA].push_back(nodeB);
			graph[nodeB].push_back(nodeA);
		}
		dfs(0);
		return ans;
	}
};

int main()
{
    int n = 4;
    vector<vector<int>> connections = {{0,1},{1,2},{2,0},{1,3}};
    
    Solution sol;
    vector<vector<int>> res =sol.criticalConnections(n, connections);

    for(int i=0; i<res.size(); i++){
        for(int j=0; j<res[i].size(); j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    
    cout<<endl;
    return 0;
}