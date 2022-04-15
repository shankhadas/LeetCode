#include <bits/stdc++.h>

using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        if(root == NULL)
            return NULL;
        if(root->val >= low && root->val <= high){
            root->left = trimBST(root->left, low, high);
            root->right = trimBST(root->right, low, high);
        }else if(root->val < low)
            root = trimBST(root->right, low, high);
        else if(root->val > high)
            root = trimBST(root->left, low, high);
        return root;
    }
};

/*int main()
{
    int n = 3;

    Solution sol;
    vector<vector<int>> res = sol.generateMatrix(n);
    for(int i=0; i<res.size(); i++){
        for(int j=0; j<res[0].size(); j++){
            cout << res[i][j] << " ";
        }
        cout<<endl;
    }
    
    cout<<endl;
    return 0;
}*/