//
// Created by das on 7/2/24.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        multimap<int, char> mp2;
        string res = "";

        for(char a : s) {
            mp[a]++;
        }
        for(auto c : mp) {
            mp2.insert({c.second, c.first});
        }

        for(auto it=mp2.rbegin(); it!=mp2.rend(); ++it) {
            res += string(it->first, it->second);
        }
        return res;
    }
};

int main()
{
    string s = "Aabb";

    Solution sol;
    string res = sol.frequencySort(s);

    cout<< res << " " << endl;

    cout<<endl;
    return 0;
}