//
// Created by das on 23/1/24.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int dfs(int idx, vector<string>& arr, vector<int> vis){
        if(idx == arr.size()) return 0;
        int skip = dfs(idx+1, arr, vis);
        for(char c : arr[idx]){
            if(vis[c - 'a']) return skip;
            vis[c - 'a'] = 1;
        }
        int noskip = arr[idx].length() + dfs(idx+1, arr, vis);
        return max(skip, noskip);
    }

    int maxLength(vector<string>& arr) {
        vector<int> vis(26, 0);
        return dfs(0, arr, vis);
    }
};

int main() {
    vector<string> arr = {"cha","r","act","ers"};

    Solution sol;
    int res=sol.maxLength(arr);

    cout << res << endl;

    cout<<endl;
    return 0;
}