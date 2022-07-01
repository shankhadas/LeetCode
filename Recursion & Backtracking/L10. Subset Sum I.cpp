#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void findSubsetSum(int ind, int sum, vector<int>& candidates, int n, vector<int>& ans){
        if(ind == n){
            ans.push_back(sum);
            return;
        }
        findSubsetSum(ind+1, sum+candidates[ind], candidates, n, ans);
        findSubsetSum(ind+1, sum, candidates, n, ans);
    }

    vector<int> subsetSum(vector<int>& candidates, int n) {
        vector<int> ans;
        findSubsetSum(0, 0, candidates, n, ans);
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
    
    vector<int> candidates = {3, 1, 2};
    
    Solution sol;
    vector<int> res = sol.subsetSum(candidates, candidates.size());
    for(auto it : res){
        cout << it << " ";
    }
            
    cout<<endl;
    return 0;
}