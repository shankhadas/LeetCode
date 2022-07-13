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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL)
        return {};
        
        queue<TreeNode*> q;
        vector<vector<int> > ans;
            
        q.push(root);
            
        while(!q.empty()) {
            int levelSize = size(q);
            vector<int> currentLevel;
            for(int i = 0; i < levelSize; i++) {
                auto top = q.front(); q.pop();
                if(top -> left) q.push(top -> left);
                if(top -> right) q.push(top -> right);
                currentLevel.push_back(top -> val);
            }
            ans.push_back(currentLevel);
        }
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

    vector<int> root = {3,9,20,NULL,NULL,15,7};

    Solution sol;
    vector<vector<int>> res = sol.levelOrder(root);
	for(int i=0; i<res.size(); i++){
        for(int j=0; j<res[0].size(); j++){
            cout << res[i][j]<< " ";
        }
        cout << endl;
    }

    return 0;
}