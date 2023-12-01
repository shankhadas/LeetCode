#include <bits/stdc++.h>

using namespace std;
/*
Time complexity: O(NlogN)
Space complexity: O(1)
*/

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int ans = 1;
        sort(points.begin(), points.end());
        int lastPoint = points[0][1];

        for(auto p : points){
            if(p[0] > lastPoint){
                ans++;
                lastPoint = p[1];
            } 
            lastPoint = min(lastPoint, p[1]);
        }
        return ans;
    }
};

int main()
{
    vector<vector<int>> points = {{10,16},{2,8},{1,6},{7,12}};

    Solution sol;
    cout << sol.findMinArrowShots(points) << "\n";
        
    cout<<endl;
    return 0;
}