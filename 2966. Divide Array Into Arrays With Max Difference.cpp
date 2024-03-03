//
// Created by das on 1/2/24.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;

        for(int i = 0; i < nums.size() - 1; i += 3){
            if(nums[i+2] - nums[i] > k){
                return {};
            }
            ans.push_back({nums[i], nums[i+1], nums[i+2]});
        }
        return ans;
    }
};

int main() {
    vector<int> nums = {1,3,4,8,7,9,3,5,1};
    int k = 2;

    Solution sol;
    vector<vector<int>> res=sol.divideArray(nums, k);

    for(int i=0; i<res.size(); i++){
        for(int j=0; j<res[0].size(); j++){
            cout << res[i][j] << " ";
        }
        cout<<endl;
    }

    cout<<endl;
    return 0;
}