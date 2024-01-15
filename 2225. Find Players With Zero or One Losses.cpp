//
// Created by das on 15/1/24.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int>mp;

        for(int i=0;i<matches.size();i++){
            mp[matches[i][0]] += 0;
            mp[matches[i][1]]++;
        }

        vector<vector<int>>ans(2);
        for(auto a: mp){
            if(a.second==0)ans[0].push_back(a.first);
            if(a.second==1)ans[1].push_back(a.first);
        }
        // sort(ans.begin(),ans.end());
        return ans;
    }
};

int main() {
    vector<vector<int>> matches = {{1,3},{2,3},{3,6},{5,6},{5,7},{4,5},{4,8},{4,9},{10,4},{10,9}};

    Solution sol;
    vector<vector<int>> res=sol.findWinners(matches);

    for(int i=0; i<res.size(); i++){
        for(int j=0; j<res[0].size(); j++){
            cout << res[i][j] << " ";
        }
        cout<<endl;
    }

    cout<<endl;
    return 0;
}