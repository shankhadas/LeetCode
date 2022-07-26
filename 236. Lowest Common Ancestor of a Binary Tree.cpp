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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (!root)
            return root;
        
        if (root == p || root == q)     // If p or q if found, return the root.
            return root;
                                        // Save the root found at left and right recursively
        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);
        
		                                // If both the nodes are found, return parent of that node. That will be root.
        if (left && right)
            return root;
                                        // If left is found, and right is not found.
                                        // It is given that both the p and q will exist for sure.
                                        // If left present then right will be a decendent of left, or vice versa.
        return left? left: right;
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