//
// Created by das on 26/2/24.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        // Arrays to track trust given and received
        vector<int> trusting(n + 1, 0);
        vector<int> trusted(n + 1, 0);

        for (auto i : trust) {                    // Count trust relationships
            trusting[i[0]]++;                    // Increment trust given
            trusted[i[1]]++;                    // Increment trust received
        }

        int ans = -1;                            // Initialize result

        for (int i = 1; i <= n; i++)           // Find the person trusted by everyone else
            if (trusting[i] == 0 && trusted[i] == n - 1){
                ans = i;             // Update result
            }
        return ans;                // Return judge's index or -1 if not found
    }
};

int main() {
    int n = 2;
    vector<vector<int>> trust = {{1,2}};

    Solution sol;
    int res = sol.findJudge(n, trust);

    cout << res << " ";

    cout<<endl;
    return 0;
}