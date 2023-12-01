#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
/*
Time complexity: O(N)
Space complexity: O(N)
*/
   bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL && q == NULL) return true;
        if(p == NULL || q == NULL) return false;
        if(p->val != q->val) return false;
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};

int main()
{
    // vector<int> root = {1,null,2,3};

    // Solution sol;
    // cout << sol.preorderTraversal(root) << "\n";
        
    // cout<<endl;
    // return 0;
}