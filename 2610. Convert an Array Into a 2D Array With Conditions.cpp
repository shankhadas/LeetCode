//
// Created by das on 2/1/24.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<int> freq(nums.size() + 1);

        vector<vector<int>> ans;
        for (int c : nums) {
            if (freq[c] >= ans.size()) {
                ans.push_back({});
            }

            // Store the integer in the list corresponding to its current frequency.
            ans[freq[c]].push_back(c);
            freq[c]++;
        }
        return ans;
    }
};

int main()
{
    vector<int> nums = {1,3,4,1,2,3,1};
    Solution sol;
    vector<vector<int>> ans=sol.findMatrix(nums);

    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    cout<<endl;
    return 0;
}