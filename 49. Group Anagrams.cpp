//
// Created by das on 6/2/24.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>my_vec;
        unordered_map<string, vector<string>>my_map;
        for(auto &str : strs){
            auto word = str;
            sort(str.begin(), str.end());
            my_map[str].push_back(word);
        }
        for(auto &val : my_map){
            my_vec.push_back(val.second);
        }
        return my_vec;
    }
};

int main()
{
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};

    Solution sol;
    vector<vector<string>> res = sol.groupAnagrams(strs);

    for(int i=0; i<res.size(); ++i){
        for(int j=0; j<res[0].size(); ++j){
            cout<< res[i][j] << " " << endl;
        }
    }

    cout<<endl;
    return 0;
}