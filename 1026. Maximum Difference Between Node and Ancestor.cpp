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
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int diff = 0;
public:
    void differ(TreeNode* root, int minVal, int maxVal) {
        if (!root)
            return;
        diff = max(diff, max(abs(minVal - root->val), abs(maxVal - root->val)));
        minVal = min(minVal, root->val);
        maxVal = max(maxVal, root->val);
        differ(root->left, minVal, maxVal);
        differ(root->right, minVal, maxVal);
    }

    int maxAncestorDiff(TreeNode* root) {
        if (!root)
            return 0;
        int minVal = root->val, maxVal = root->val;
        differ(root, minVal, maxVal);
        return diff;
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