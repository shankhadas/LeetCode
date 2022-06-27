#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> res(m,vector<int> (n,0)); // matrix creation
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                res[j][i] = matrix[i][j]; // filling the matrix in transpose form
            }
        }
        return res;
    }
};

int main()
{
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};

    Solution sol;
    vector<vector<int>> res=sol.transpose(matrix);

    for(int i=0; i<res.size(); i++)
        for(int j=0; j<res[0].size(); j++)
            cout<<res[i][j] << " ";
    
    cout<<endl;
    return 0;
}