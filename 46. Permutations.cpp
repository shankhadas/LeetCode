#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    /*
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        helper(nums, result, 0);
        return result;
    }
    
    void helper(vector<int>& nums, vector<vector<int>>& result, int n){
        if(n == nums.size()){
            result.push_back(nums);
            return;
        }

        for(int i=n; i<nums.size(); i++){
            swap(nums[i], nums[n]);
            helper(nums, result, n+1);
            swap(nums[i], nums[n]);
        }
    }
    */

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
    vector<int> nums = {1,2,3};
    Solution sol;
    vector<vector<int>> n =sol.permute(nums);
    for(int i=0; i<n.size(); i++){
        for(int j=0; j<n[i].size(); j++){
            cout << n[i][j] << " ";
        }
        cout << endl;
    }
    
    cout<<endl;
    return 0;
}