#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void solve(int st,int k,int n,vector<int> &ds,vector<vector<int>> &ans){
        if(k<=0){
            if(n==0) ans.push_back(ds);
            return;
        }

        for(int i=st;i<=9;i++){
            ds.push_back(i);
            solve(i+1,k-1,n-i,ds,ans);
            ds.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n){
        vector<vector<int>> ans;
        vector<int> ds;
        solve(1,k,n,ds,ans);
        return ans;
    }
};

int main()
{
    int k= 3, n = 7;
    
    Solution sol;
    vector<vector<int>> res =sol.combinationSum3(k, n);

    for(int i=0; i<res.size(); i++){
        for(int j=0; j<res[i].size(); j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    
    cout<<endl;
    return 0;
}