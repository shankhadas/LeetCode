#include <bits/stdc++.h>

using namespace std;

/*
    TC: ~O((2^n) * k)
    SC: O(k * x)
*/

class Solution {
public:
    void findCombination(int ind, int target, vector<int>& candidates, vector<vector<int>>& ans, vector<int> ds){
        if(target == 0){
            ans.push_back(ds);
            return;
        }

        for(int i=ind; i<candidates.size(); i++){
            if(i>ind && candidates[i] == candidates[i-1])
                continue;
            if(candidates[i] > target)
                break;
            ds.push_back(candidates[i]);
            findCombination(i+1, target-candidates[i], candidates, ans, ds);
            ds.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
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
    
    vector<int> candidates = {10,1,2,7,6,1,5};
    int target = 8;
    
    Solution sol;
    vector<vector<int>> res = sol.combinationSum2(candidates, target);
    for(int i=0; i<res.size(); i++){
        for(int j=0; j<res[i].size(); j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
            
    cout<<endl;
    return 0;
}