//
// Created by das on 20/2/24.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        long long sum = 0;
        sort(nums.begin(),nums.end());

        for(auto i : nums)
            sum += i;

        for(int i = n - 1; i >= 2; i--){
            sum -= nums[i];
            if(sum > nums[i]){
                return sum + nums[i];
            }
        }
        return -1;
    }
};

int main() {
    vector<int> nums = {5,5,5};
    Solution sol;
    long long res = sol.largestPerimeter(nums);

    cout << res << " ";

    cout<<endl;
    return 0;
}