#include <bits/stdc++.h>

using namespace std;
/*
Time complexity: O(N∗K)
Space complexity: O(1)
*/

class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int ans = 0;
        int k = strs[0].size();

        for(int col =0; col<k; col++){
            for(int row=1; row<strs.size(); row++){
                if(strs[row-1][col] > strs[row][col]){
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};

int main()
{
    vector<string> strs = {"cba","daf","ghi"};

    Solution sol;
    cout << sol.minDeletionSize(strs) << "\n";
        
    cout<<endl;
    return 0;
}