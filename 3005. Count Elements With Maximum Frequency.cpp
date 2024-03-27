//
// Created by das on 27/3/24.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> map;
        int count = 0;
        int maxx = -1;

        for(int val : nums) {
            map[val]++;
        }

        for(auto& pair : map) {
            maxx = max(maxx, pair.second);
        }

        for(auto& pair : map) {
            if(pair.second == maxx) {
                count += maxx;
            }
        }
        return count;
    }
};

int main() {
    vector<int> nums = {1,2,2,3,1,4};
    Solution sol;
    int res = sol.maxFrequencyElements(nums);

    cout << res << " ";

    cout<<endl;
    return 0;
}