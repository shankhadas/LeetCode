#include <bits/stdc++.h>

using namespace std;

/*
    Time Complexity :- BigO(NlogN)
    Space Complexity :- BigO(1)
*/

class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        sort(costs.begin(), costs.end(), [](const vector<int>&a, const vector<int>&b){
            return (a[0] - a[1]) < (b[0] - b[1]);
        });
        int cost = 0;
        for(int i=0; i<costs.size()/2; i++){
            cost += costs[i][0];
        }
        for(int i=costs.size()/2; i<costs.size(); i++){
            cost += costs[i][1];
        }
        return cost;

        /*
        static bool comparator(vector<int>& a, vector<int>& b) {
            return (a[1]-a[0] > b[1]-b[0]);
        }
    
        int twoCitySchedCost(vector<vector<int>>& costs) {
            int n = costs.size();
            sort(costs.begin(), costs.end(), comparator);
            int ans = 0;
            for(int i=0; i < n; ++i) 
                ans += i>=n/2 ? costs[i][1] : costs[i][0];
            return ans;
        }
        */
    }
};

int main()
{
    vector<vector<int>> costs = {{10,20},{30,200},{400,50},{30,20}};
    
    Solution sol;
    int n=sol.twoCitySchedCost(costs);

        cout << n << " ";
    
    cout<<endl;
    return 0;
}