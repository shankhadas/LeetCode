#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        if(rows == 0 || cols == 0)
            return false;
        int start = 0, end = rows * cols - 1;
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(matrix[mid / cols][mid % cols] == target)
                return true;
            if(matrix[mid / cols][mid % cols] < target)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return false;
    }
};

int main()
{
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 3;
    Solution sol;
    bool n=sol.searchMatrix(matrix, target);
    
    cout << n << " ";
    
    cout<<endl;
    return 0;
}