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
    int diameterOfBinaryTree(TreeNode* root) {
        int h=0;
        return diameter(root, h);
    }
    
    int diameter(TreeNode* root, int &h) {
        if(!root) {
            h=0;
            return 0;
        }
        int h1=0, h2=0;
        int d1 = diameter(root->left, h1);
        int d2 = diameter(root->right, h2);
        h=max(h1,h2)+1;
        return max({d1, d2, h1+h2});        
    }
};
/*
int main()
{
    vector<int> v = {3,3,7,7,10,11,11};
    
    Solution sol;
    int n=sol.singleNonDuplicate(v);
    cout<<n<<" ";
    
    cout<<endl;
    return 0;
}
*/