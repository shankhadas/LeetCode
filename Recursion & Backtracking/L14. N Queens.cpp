#include <bits/stdc++.h>

using namespace std;

/*
    TC: O(N! * N) nearly
    SC: O(N^2)
*/
                            
class Solution {
public:
    bool isSafe(int row, int col, vector<string> board, int n){
        // check upper left
        int dup_row = row;
        int dup_col = col;
        while(row >= 0 && col >= 0){
            if(board[row][col] == 'Q') return false;
            row--; col--;
        }

        // check left
        row = dup_row;
        col = dup_col;
        while(col >= 0){
            if(board[row][col] == 'Q') return false;
            col--;
        }

        // check lower left
        row = dup_row;
        col = dup_col;
        while (row < n && col >= 0) {
        if (board[row][col] == 'Q') return false;
            row++; col--;
        }
      return true;
    }

    void solve(int col, vector<string>& board, vector<vector<string>>& ans, int n){
        if(col == n){
            ans.push_back(board);
            return;
        }

        for(int row=0; row<n; row++){
            if(isSafe(row, col, board, n)){
                board[row][col] = 'Q';
                solve(col+1, board, ans, n);
                board[row][col] = '_';
            }
        }
    }

    vector<vector<string>> nQueens(int n){
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n, '_');
        for(int i=0; i<n; i++)
            board[i] = s;
        
        solve(0, board, ans, n);
        return ans;
    }
};

int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    // #endif
    
    int n = 4;
    
    Solution sol;
    vector<vector<string>> res = sol.nQueens(n);
    for(int i=0; i<res.size(); i++){
        for(int j=0; j<res[i].size(); j++){
            cout << res[i][j] << " " << endl;
        }
        cout << endl;
    }
            
    cout<<endl;
    return 0;
}