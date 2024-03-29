#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
/*
Time complexity: O(N^2)
Space complexity: O(N)
*/
    int maxPoints(vector<vector<int>>& points) {
        if(points.size() <=2) return points.size();
        int ans = 0;
        for(auto it1 : points){
            unordered_map<double,int> mp;
            double x1 = it1[0], y1 = it1[1];
            for(auto it2 : points){   
                if(it2 == it1) continue;
                double x2 = it2[0], y2 = it2[1];
                double slope;
                if(x2-x1 == 0){
                    slope = INT_MAX; // slope is infinity for vertical line
                }else{
                    slope = (y2-y1)/(x2-x1);   
                }
                mp[slope]++;
                ans = max(ans,mp[slope]);
            }
        }
        return ans+1; //including point i
    }
};

int main()
{
    vector<vector<int>> points = {{1,1},{2,2},{3,3}};

    Solution sol;
    cout << sol.maxPoints(points) << "\n";
        
    cout<<endl;
    return 0;
}