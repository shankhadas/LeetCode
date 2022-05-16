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
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*> q;     // making queue for doing the level order traversal (BFS)
        q.push(root);
        int ans = 0;            // it is our final ans var that will store the leaves sum

                                // Applying BFS
        while(!q.empty()){
            int size = q.size();       // level size
            int sum = 0;               // it is sum that will store the sum for each level

                                        // just calculating the level sum 
                                        // and push new level in our queue
            for(int i=0;i<size;i++){
                TreeNode* top = q.front();
                q.pop();
                                        // add up the node val
                sum += top->val;
                                        // pushing the nodes for next level
                if(top->left)
                    q.push(top->left);
                if(top->right)
                    q.push(top->right);
            }
                                        // just updating our main ans with current level sum
                                        // logically at the last we have our last level sum in our ans that is nothing but our leaves sum
            ans = sum;
        }
        return ans;
    }
};
/*
int main()
{
    vector<vector<int>>times = {{2,1,1},{2,3,1},{3,4,1}};
    int n = 4, k = 2;
    
    Solution sol;
    int res =sol.networkDelayTime(times, n, k);

    cout << res << " ";
    
    cout<<endl;
    return 0;
}
*/