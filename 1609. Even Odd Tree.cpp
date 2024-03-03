//
// Created by das on 3/3/24.
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
    bool isEvenOddTree(TreeNode* root) {
        vector<TreeNode*> q{root};
        int level = -1; // Initialize the level

        while (!q.empty()) {
            ++level; // Move to the next level
            int prevValue = 0; // Initialize the previous value for comparison
            vector<TreeNode*> nextLevel;

            for (auto node : q) {
                if (node != nullptr) {
                    // Check if the value and level have the correct parity
                    if (node->val % 2 == level % 2)
                        return false;

                    // Check if the values are in the required order
                    if (prevValue != 0 && ((level % 2 && prevValue <= node->val) || (!(level % 2) && prevValue >= node->val)))
                        return false;

                    prevValue = node->val; // Update the previous value for the next iteration

                    // Enqueue the left and right children for the next level
                    nextLevel.push_back(node->left);
                    nextLevel.push_back(node->right);
                }
            }
            swap(q, nextLevel); // Update the queue for the next level
        }
        return true;
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