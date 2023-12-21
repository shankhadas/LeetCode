//
// Created by das on 22/12/23.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        int res = 0;
        for(int i=1; i<points.size(); i++) {
            res = max(res, points[i][0]-points[i-1][0]);
        }
        return res;
    }
};

int main() {
    vector<vector<int>> points = {{8,7},{9,9},{7,4},{9,7}};

    Solution sol;
    int res=sol.maxWidthOfVerticalArea(points);

    cout << res << endl;

    cout<<endl;
    return 0;
}