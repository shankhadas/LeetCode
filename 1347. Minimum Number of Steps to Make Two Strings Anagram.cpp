//
// Created by das on 13/1/24.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minSteps(string s, string t) {
        int count[26] = {0};
        // Storing the difference of frequencies of characters in t and s.
        for (int i = 0; i < s.size(); i++) {
            count[t[i] - 'a']++;
            count[s[i] - 'a']--;
        }

        int ans = 0;
        // Adding the difference where string t has more instances than s.
        // Ignoring where t has fewer instances as they are redundant and
        // can be covered by the first case.
        for (int i = 0; i < 26; i++) {
            ans += max(0, count[i]);
        }

        return ans;
    }
};

int main()
{
    string s = "bab", t = "aba";

    Solution sol;
    int res=sol.minSteps(s, t);

    cout << res << "";

    cout<<endl;
    return 0;
}