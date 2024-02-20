//
// Created by das on 20/2/24.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        if(nums.size() <= 1)
            return nums;
        vector<vector<int>>my_vec(nums.size());
        sort(nums.begin(), nums.end());
        int len=0;
        vector<int>res;
        for(int i=0; i<nums.size(); ++i){
            for(int j=0; j<i; ++j){
                if(nums[i] % nums[j] == 0){
                    if(my_vec[j].size()+1 > my_vec[i].size())
                        my_vec[i] = my_vec[j];
                }
            }
            my_vec[i].push_back(nums[i]);
            if(my_vec[i].size() > len){
                len = my_vec[i].size();
                res = my_vec[i];
            }
        }
        return res;
    }
};

int main()
{
    vector<int> nums = {1,2,3};

    Solution sol;
    vector<int> res = sol.largestDivisibleSubset(nums);

    for(auto a: res)
        cout<< a << " ";

    cout<<endl;
    return 0;
}