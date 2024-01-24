//
// Created by das on 24/1/24.
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
    int count = 0;
public:

    void preorder(TreeNode* node, int path){
        if (node != nullptr) {
            // compute occurences of each digit
            // in the corresponding register
            path = path ^ (1 << node->val);
            // if it's a leaf check if the path is pseudo-palindromic
            if (node->left == nullptr && node->right == nullptr) {
                // check if at most one digit has an odd frequency
                if ((path & (path - 1)) == 0) {
                    ++count;
                }
            }
            preorder(node->left, path);
            preorder(node->right, path) ;
        }
    }

    int pseudoPalindromicPaths (TreeNode* root) {
        preorder(root, 0);
        return count;
    }
};

// int main() {
//     int  n = 1, k = 6, target = 3;
//
//     Solution sol;
//     int res=sol.numRollsToTarget(n, k ,target);
//
//     cout << res << endl;
//
//     cout<<endl;
//     return 0;
// }