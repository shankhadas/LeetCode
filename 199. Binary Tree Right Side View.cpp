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
    void RightView(TreeNode* root, int level, vector<int>&ans){
        if(root==NULL)
            return;
        
        if(level == ans.size())
            ans.push_back(root->val);
        
        RightView(root->right, level+1, ans);
        RightView(root->left, level+1, ans);
    }
    
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        RightView(root, 0, ans);
        
        return ans;
    }
};
 
int main()
{
    /* Construct the following tree
               1
             /   \
            /     \
           2       3
		   \		\
		   	\		 \
			 5        4
    */
 
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(5);
    // root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(4);
    // root->right->left->left = new TreeNode(7);
    // root->right->left->right = new TreeNode(8);
 
    inorder(root);
    cout << endl;

    Solution sol;
    vector<int> res = sol.rightSideView(root);
	for(auto it : res)
    	cout<< it << endl;

    return 0;
}