//
// Created by das on 17/1/24.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;

        for(int a : arr) {
            mp[a]++;
        }

        unordered_set<int> s;
        for(auto [_,c] : mp) {
            if(s.count(c) >= 1)
                return 0;
            s.insert(c);
        }
        return 1;
    }
};

int main() {
    vector<int> arr = {1,2,2,1,1,3};

    Solution sol;
    bool res=sol.uniqueOccurrences(arr);

    cout << res << endl;

    cout<<endl;
    return 0;
}