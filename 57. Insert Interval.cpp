//
// Created by das on 27/3/24.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n=intervals.size();
        vector<vector<int>> ans;
        int i=0;

        while(i<n){
            if(newInterval[0]>intervals[i][1])
                ans.push_back(intervals[i]);
            else if(newInterval[1]<intervals[i][0])
                break;
            else {
                newInterval[0]=min(newInterval[0],intervals[i][0]);
                newInterval[1]=max(newInterval[1],intervals[i][1]);
            }
            i++;
        }

        ans.push_back(newInterval);

        while(i<n){
            ans.push_back(intervals[i]);
            i++;
        }
        return ans;
    }
};

int main()
{
    vector<int>  newInterval = {2,5};
    vector<vector<int>> intervals = {{1,3},{6,9}};

    Solution sol;
    vector<vector<int>> ans=sol.insert(intervals, newInterval);

    for (int i=0; i<ans.size(); i++) {
        for (int j=0; j<ans.size(); j++) {
            cout << ans[i][j] <<" ";
        }
        cout << endl;
    }

    cout<<endl;
    return 0;
}
