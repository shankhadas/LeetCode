#include <bits/stdc++.h>

using namespace std;

/*
    TC: O( N^M) (n raised to m)
    SC: O(N)
*/
                            
class Solution {
public:
    bool isPalindrome(string s, int start, int end){
        while(start <= end){
            if(s[start++] != s[end--])
                return false;
        }
        return true;
    }

    void partitionHelper(int idx, string s, vector<string>& path, vector<vector<string>>& res){
        if(idx == s.size()){
            res.push_back(path);
            return;
        }

        for(int i=idx; i<s.size(); i++){
            if(isPalindrome(s, idx, i)){
                path.push_back(s.substr(idx, i-idx+1));
                partitionHelper(i+1, s, path, res);
                path.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s){
        vector<vector<string>> res;
        vector<string> path;
        partitionHelper(0, s, path, res);
        return res;
    }
};

int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    // #endif
    
    string s = "aabb";
        
    Solution sol;
    vector<vector<string>> ans = sol.partition(s);

    cout << " [ ";
    for (auto i: ans){
        cout << "[ ";
        for (auto j: i){
            cout << j << " ";
        }
        cout << "] ";
    }
    cout << "]";
            
    cout<<endl;
    return 0;
}