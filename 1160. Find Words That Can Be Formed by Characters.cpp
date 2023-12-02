//
// Created by das on 2/12/23.
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int> counts;
        for (char c : chars) {
            counts[c]++;
        }

        int ans = 0;
        for (string word : words) {
            unordered_map<char, int> wordCount;
            for (char c : word) {
                wordCount[c]++;
            }

            bool good = true;
            for (auto& [c, freq] : wordCount) {
                if (counts[c] < freq) {
                    good = false;
                    break;
                }
            }

            if (good) {
                ans += word.size();
            }
        }

        return ans;
    }
};

int main()
{
    vector<string> words = {"cat","bt","hat","tree"};
    string chars = "atach";

    Solution sol;
    int res=sol.countCharacters(words, chars);

    cout << res << endl;

    cout<<endl;
    return 0;
}