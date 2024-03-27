//
// Created by das on 27/3/24.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());

        vector<int> result;
        for (const auto& num : set1) {
            if (set2.find(num) != set2.end()) {
                result.push_back(num);
            }
        }

        return result;
    }
};

int main() {
    vector<int> nums1 = {1,2,2,1}, nums2 = {2,2};

    Solution sol;
    vector<int> res = sol.intersection(nums1, nums2);

    for (auto a : res) {
        cout << a << " ";
    }

    cout<<endl;
    return 0;
}