//
// Created by das on 4/1/24.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int ,int> count;
        for(int c : nums) {
            count[c]++;
        }

        int ans = 0;
        for(auto [_,c]:count) {
            if(c==1)
                return -1;
            ans += ceil((double)c/3); // double is used for floating point to get the ceil value
        }
        return ans;
    }
};

int main()
{
    vector<int> nums = {2,3,3,2,2,4,2,3,4};
    Solution sol;
    int res=sol.minOperations(nums);

    cout<< res << endl;

    cout<<endl;
    return 0;
}