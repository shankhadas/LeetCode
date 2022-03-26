#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        map<int, vector<int>> stops;
        for (int i = 0; i < routes.size(); i++) {
            for (auto n : routes[i]) stops[n].push_back(i);
        }
        int ans = 0;
        queue<int> q;
        q.push(source);
        set<int> visitedStop;
        set<int> visitedBus;
        while (!q.empty()){
            int size = q.size();
            set<int> tmp;
            for (int i = 0; i < size; i++){
                int cur = q.front();
                q.pop();
                if (cur == target) return ans;
                if (visitedStop.count(cur)) continue;
                visitedStop.emplace(cur);
                for (auto bus : stops[cur]){
                    if (visitedBus.count(bus)) continue;
                    visitedBus.emplace(bus);
                    for (auto stop : routes[bus]) {
                        tmp.emplace(stop);
                    }
                }
            }
            for (auto s : tmp) {
              q.push(s);  
            } 
            ans++;
        }
        return -1;
    }
};

int main()
{
    vector<vector<int>> v = {{1,2,7},{3,6,7}};
    int source = 1, target = 6;
    Solution sol;
    int n=sol.numBusesToDestination(v, source, target);
    cout<<n<<" ";
    
    cout<<endl;
    return 0;
}