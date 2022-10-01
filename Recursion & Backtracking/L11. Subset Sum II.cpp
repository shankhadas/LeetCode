#include <bits/stdc++.h>

using namespace std;
                            //   {1, 2, 2, 2, 3, 3}
                            //    0  1  2  3  4  5
/*
    TC: ~O((2^n)*n)
    SC: O((2^n)*k)
*/
class Solution {
public:
    void findSubsets(int ind, vector<int>& nums, vector<int>& ds, vector<vector<int>>& ans){
        ans.push_back(ds);

        for(int i=ind; i<nums.size(); i++){
            if(i != ind && nums[i] == nums[i-1]){   // to avoid same values picked up from the array
                continue;
            }
            ds.push_back(nums[i]);
            findSubsets(i+1, nums, ds, ans);
            ds.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(nums.begin(), nums.end());
        findSubsets(0, nums, ds, ans);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    // #endif
    
    vector<int> nums = {1, 2, 2, 2, 3, 3};
    
    Solution sol;
    vector<vector<int>> res = sol.subsetsWithDup(nums);
    for(int i=0; i<res.size(); i++){
        for(int j=0; j<res[i].size(); j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
            
    cout<<endl;
    return 0;
}