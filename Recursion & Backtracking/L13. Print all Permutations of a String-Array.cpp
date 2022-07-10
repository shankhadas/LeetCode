#include <bits/stdc++.h>

using namespace std;
                            
class Solution {
public:
    void recPermutations(int ind, vector<int>& nums, vector<vector<int>>& ans){
        if(ind == nums.size()){
            ans.push_back(nums);
            return;
        }

        for(int i=ind; i<nums.size(); i++){
            swap(nums[ind], nums[i]);  
            recPermutations(ind+1, nums, ans);
            swap(nums[ind], nums[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        recPermutations(0, nums, ans);
        return ans;
    }
};

int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    // #endif
    
    vector<int> nums = {1, 2, 3};
    
    Solution sol;
    vector<vector<int>> res = sol.permute(nums);
    for(int i=0; i<res.size(); i++){
        for(int j=0; j<res[i].size(); j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
            
    cout<<endl;
    return 0;
}