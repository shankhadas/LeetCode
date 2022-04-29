#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int size = graph.size();
        vector<int> color(size, 0);
        for(int i=0; i<size; i++){
            if(color[i])
                continue;
            queue<int>q;
            q.push(i);
            color[i] = 1;
            while(!q.empty()){
                int parent = q.front();
                q.pop();
                for(int child : graph[parent]){
                    if(color[child] == 0){
                        color[child] = -color[parent];
                        q.push(child);
                    }else{
                        if(color[child] == color[parent])
                            return false;
                    }
                }
            }
        }
        return true;
    }
};

int main()
{
    vector<vector<int>> graph = {{1,2,3},{0,2},{0,1,3},{0,2}};

    Solution sol;
    bool n=sol.isBipartite(graph);
    cout<<n<<" ";
    
    cout<<endl;
    return 0;
}