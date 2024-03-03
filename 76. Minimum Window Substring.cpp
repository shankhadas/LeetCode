//
// Created by das on 4/2/24.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        if (s.empty() || t.empty() || s.length() < t.length()) {
            return "";
        }

        vector<int> map(128, 0);
        int count = t.length();
        int start = 0, end = 0, minLen = INT_MAX, startIndex = 0;

        for (char c : t) {
            map[c]++;
        }

        while (end < s.length()) {
            if (map[s[end++]]-- > 0) {
                count--;
            }

            while (count == 0) {
                if (end - start < minLen) {
                    startIndex = start;
                    minLen = end - start;
                }

                if (map[s[start++]]++ == 0) {
                    count++;
                }
            }
        }
        return minLen == INT_MAX ? "" : s.substr(startIndex, minLen);
    }
};

int main() {
    string s = "ADOBECODEBANC", t = "ABC";

    Solution sol;
    string res=sol.minWindow(s, t);

    cout << res << " ";

    cout<<endl;
    return 0;
}