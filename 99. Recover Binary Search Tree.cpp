#include <bits/stdc++.h>

using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(NULL), right(NULL) {}
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* first, *second, *pre;
	void recoverTree(TreeNode* root) {
		pre = new TreeNode(INT_MIN);
		inorder(root);
		swap(first->val, second->val);
	}

	void inorder(TreeNode* root) {
		if(root == NULL) 
			return;

		inorder(root->left);

		if(first == NULL && root->val < pre->val)
			first = pre;
		if(first != NULL && root->val < pre->val)
			second = root;
		pre = root;

		inorder(root->right);
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