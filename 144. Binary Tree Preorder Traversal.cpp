#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
/*
Time complexity: O(N)
Space complexity: O(N)
*/
    vector<int> ans;

    void dfs(TreeNode* node){
        if(node == nullptr) return;
        ans.push_back(node->val);
        dfs(node->left);
        dfs(node->right);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        dfs(root);
        return ans;
    }
};

int main()
{
    // vector<int> root = {1,null,2,3};

    // Solution sol;
    // cout << sol.preorderTraversal(root) << "\n";
        
    // cout<<endl;
    // return 0;
}