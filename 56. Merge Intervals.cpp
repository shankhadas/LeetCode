#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int x = intervals[0][0], y = intervals[0][1];

        vector<vector<int>> result;

        for(int i = 1;i < intervals.size();i++) {
            if(y >= intervals[i][1]) continue;
            if(y >= intervals[i][0]) {
                y = intervals[i][1];
            } else {
                result.push_back({x, y}); 
                x = intervals[i][0];
                y = intervals[i][1];
            }
        }
        result.push_back({x, y});
        return result;
    }
};

int main()
{
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    Solution sol;
    vector<vector<int>> res=sol.merge(intervals);
    
    for(int i=0; i<res.size(); i++){
        for(int j=0; j<res[i].size(); j++){
            cout << res[i][j] << " ";
        }
    }
    
    cout<<endl;
    return 0;
}