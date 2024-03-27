//
// Created by das on 27/3/24.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string customSortString(string order, string s) {
        string result = "";
        unordered_map<int,int>mp;

        for(auto &it : s){
            mp[it]++;
        }

        for(auto &it : order){
            if(mp.find(it) != mp.end())
                result.append(mp[it], it);
            mp.erase(it);
        }

        for(auto &it : mp){
            result.append(it.second,it.first);
        }

        return result;
    }
};

int main() {
    string order = "bcafg", s = "abcd" ;

    Solution sol;
    string res = sol.customSortString(order, s);

    cout << res << " ";

    cout<<endl;
    return 0;
}