#include <bits/stdc++.h>

using namespace std;
                            
class Solution {
public:
    void findPermutations(vector<int>& ds, vector<int>& nums, vector<vector<int>>& ans, int freq[]){
        if(ds.size() == nums.size()){
            ans.push_back(ds);
            return;
        }

        for(int i=0; i<nums.size(); i++){
            if(!freq[i]){
                ds.push_back(nums[i]);
                freq[i] = 1;
                findPermutations(ds, nums, ans, freq);
                freq[i] = 0;
                ds.pop_back();
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        int freq[nums.size()];
        for(int i=0; i<nums.size(); i++)
            freq[i] = 0;
        findPermutations(ds, nums, ans, freq);
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