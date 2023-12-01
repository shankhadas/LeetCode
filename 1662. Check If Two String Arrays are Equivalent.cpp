//
// Created by das on 1/12/23.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str1, str2;

        for(string s: word1) {
            str1 += s;
        }
        for(string s: word2) {
            str2 += s;
        }
        return str1 == str2; //something
    }
};

int main()
{
    vector<string> word1 = {"a", "cb"};
    vector<string> word2 = {"ab", "c"};

    Solution sol;
    bool res=sol.arrayStringsAreEqual(word1, word2);

    cout << res << endl;

    cout<<endl;
    return 0;
}