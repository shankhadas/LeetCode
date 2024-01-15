//
// Created by das on 12/1/24.
//
#include <bits/stdc++.h>

using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void _helper(TreeNode* root, vector<int> &my_vec){
        if(root==NULL)
            return;
        if((root->left==NULL) && (root->right==NULL))
            my_vec.push_back(root->val);
        _helper(root->left,my_vec);
        _helper(root->right,my_vec);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>my_vec1;
        vector<int>my_vec2;

        _helper(root1, my_vec1);
        _helper(root2, my_vec2);

        if(my_vec1==my_vec2)
            return true;
        return false;
    }
};

// int main()
// {
//     vector<int> nums = {2,4,6,8,10};
//
//     Solution sol;
//     int res=sol.numberOfArithmeticSlices(nums);
//
//     cout << res << "";
//
//     cout<<endl;
//     return 0;
// }