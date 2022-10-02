#include <bits/stdc++.h>

using namespace std;

/*
    TC: O(9^(n ^ 2)), in the worst case, for each cell in the n2 board, we have 9 possible numbers.
    SC: O(1), since we are refilling the given board itself, there is no extra space required, so constant space complexity.
*/
                            
class Solution {
public:
    bool isValid(int c, int row, int col, vector<vector<char>>& board){
        for(int i=0; i<9; i++){
            if(board[i][col] == c) return false;    // check for row if same value exists
            if(board[row][i] == c) return false;    // check for column if same value exists
            if(board[3*(row/3) + i/3][3*(col/3) + i%3] == c) return false;    // check for 3*3 box if value duplicates
        }
        return true;
    }

    bool solveSudoku(vector<vector<char>>& board){
        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[0].size(); j++){
                
                if(board[i][j] == '.'){
                    for(char c='1'; c<='9'; c++){
                        if(isValid(c, i, j, board)){
                            board[i][j] = c;

                            if(solveSudoku(board) == true)
                                return true;
                            else    
                                board[i][j] = '.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
};

int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    // #endif
    
    vector<vector<char>>board{
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };

    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cout << board[i][j] << " ";
        }
            cout << "\n";
    }
    cout << endl<<endl;
    
    Solution sol;
    // vector<vector<char>> res = sol.solveSudoku(board);
    sol.solveSudoku(board);
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cout << board[i][j] << " ";
        }
        cout << "\n";
    }
            
    cout<<endl;
    return 0;
}