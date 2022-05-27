#include <bits/stdc++.h>

using namespace std;

// Data structure to store a binary tree node
struct TreeNode
{
    int val;
    TreeNode *left, *right;
 
    TreeNode(int data)
    {
        this->val = data;
        this->left = this->right = nullptr;
    }
};
 
// Recursive function to perform inorder traversal on the tree
void inorder(TreeNode* root)
{
    // return if the current node is empty
    if (root == nullptr) {
        return;
    }
 
    // Traverse the left subtree
    inorder(root->left);
 
    // Display the data part of the root (or current node)
    cout << root->val << " ";
 
    // Traverse the right subtree
    inorder(root->right);
}

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
    int sum =INT_MIN;
    int res;

    int h(TreeNode* root){
        if(root==NULL)
            return 0;
        int ls=max(0,h(root->left));
        int rs=max(h(root->right),0);
        sum=max(sum,ls+rs+root->val);
        res = max(ls,rs)+root->val;
        return res;
    }

    int maxPathSum(TreeNode* root) {
        h(root);
        return sum;
    }
};
 
int main()
{
    /* Construct the following tree
               1
             /   \
            /     \
           2       3
    */
 
    TreeNode* root = new TreeNode(-10);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    // root->left->left = new TreeNode(4);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    // root->right->left->left = new TreeNode(7);
    // root->right->left->right = new TreeNode(8);
 
    inorder(root);
    cout << endl;

    Solution sol;
    int res = sol.maxPathSum(root);
    cout<< res << endl;

    return 0;
}