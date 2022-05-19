#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int getAdj(vector<vector<char>>& board, int i, int j) {
        int ans = 0;
        int m = board.size();
        int n = board[0].size();
        if (i > 0 && board[i - 1][j] == 'M') ++ans;
        if (j > 0 && board[i][j - 1] == 'M') ++ans;
        if (i < m - 1 && board[i + 1][j] == 'M') ++ans;
        if (j < n - 1 && board[i][j + 1] == 'M') ++ans;
        if (i > 0 && j > 0 && board[i - 1][j - 1] == 'M') ++ans;
        if (i > 0 && j < n - 1 && board[i - 1][j + 1] == 'M') ++ans;
        if (i < m - 1 && j > 0 && board[i + 1][j - 1] == 'M') ++ans;
        if (i < m - 1 && j < n - 1 && board[i + 1][j + 1] == 'M') ++ans;
        return ans;
    }

    void reveal(vector<vector<char>>& board, int i, int j) {
        int m = board.size();
        int n = board[0].size();
        if (i < 0 || j < 0 || i >= m || j >= n || board[i][j] != 'E') {
            return;
        }
        int adj = getAdj(board, i, j);
        if (adj == 0) {
            board[i][j] = 'B';
        } else {
            board[i][j] = '0' + adj;
            return;
        }
        reveal(board, i, j + 1);
        reveal(board, i + 1, j);
        reveal(board, i - 1, j);
        reveal(board, i, j - 1);
        reveal(board, i + 1, j + 1);
        reveal(board, i - 1, j + 1);
        reveal(board, i + 1, j - 1);
        reveal(board, i - 1, j - 1);
    }

    vector<vector<char>> updateBoard(vector<vector<char>>& board, vector<int>& click) {
        int i = click[0];
        int j = click[1];
        if (board[i][j] == 'M') {
            board[i][j] = 'X';
        } else {
            reveal(board, i, j);
        }
        return board;
    }
};

int main()
{
    vector<vector<char>> board = {
        {'E','E','E','E','E'},
        {'E','E','M','E','E'},
        {'E','E','E','E','E'},
        {'E','E','E','E','E'}
    };
    vector<int> click = {3,0};

    Solution sol;
    vector<vector<char>> res=sol.updateBoard(board, click);
    
    for(int i=0; i<res.size(); i++){
        for(int j=0; j<res[0].size(); j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    
    cout<<endl;
    return 0;
}