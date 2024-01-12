//
// Created by das on 12/1/24.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool halvesAreAlike(string s) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int vowelsCount = 0;
        int midIndex = s.length() / 2;

        for (int i = 0; i < midIndex; i++) {
            char charA = s[i];
            char charB = s[midIndex + i];
            if (vowels.count(charA)) vowelsCount++;
            if (vowels.count(charB)) vowelsCount--;
        }

        return vowelsCount == 0;
    }
};

int main()
{
    string s = "book";

    Solution sol;
    bool res=sol.halvesAreAlike(s);

    cout << res << "";

    cout<<endl;
    return 0;
}