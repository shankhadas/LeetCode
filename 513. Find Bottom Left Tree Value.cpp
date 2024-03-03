//
// Created by das on 28/2/24.
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
public:
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);

        TreeNode* a = NULL;
        while(!q.empty()){
            a = q.front();
            q.pop();

            if(a->right)
                q.push(a->right);
            if(a->left)
                q.push(a->left);
        }
        return a->val;
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