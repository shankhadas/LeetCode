#include <bits/stdc++.h>

using namespace std;

/*
    TC: ~O((2^t)*k)
    SC: O(k * x)
*/

class Solution {
public:
    void findCombination(int idx, int target, vector<int>& candidates, vector<vector<int>>& ans, vector<int> ds){
        if(idx == candidates.size()){
            if(target == 0){
                ans.push_back(ds);
            }
            return;
        }

        if(candidates[idx] <= target){
            ds.push_back(candidates[idx]);
            findCombination(idx, target-candidates[idx], candidates, ans, ds);
            ds.pop_back();
        }
        findCombination(idx+1, target, candidates, ans, ds);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findCombination(0, target, candidates, ans, ds);
        return ans;
    }
};

int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    // #endif
    
    vector<int> candidates = {2,3,6,7};
    int target = 7;
    
    Solution sol;
    vector<vector<int>> res = sol.combinationSum(candidates, target);
    for(int i=0; i<res.size(); i++){
        for(int j=0; j<res[i].size(); j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
            
    cout<<endl;
    return 0;
}