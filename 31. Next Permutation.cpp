#include <bits/stdc++.h>

using namespace std;

//https://leetcode.com/problems/next-permutation/discuss/1880508/C%2B%2Boror-Detailed-3-steps-oror-O(n)

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //next_permutation(nums.begin(), nums.end());

        int i;
        for(i = nums.size() - 2; i >= 0; i--) {
            if(nums[i] < nums[i + 1]) break;
        }
        if(i >= 0) {
            int j = nums.size() - 1;
            while(nums[i] >= nums[j]) j--;
            swap(nums[i], nums[j]);    
        }
        reverse(nums.begin() + i + 1, nums.end());
    }
};

int main()
{
    vector<int> nums = {1,2,3};
    
    Solution sol;
    sol.nextPermutation(nums);
    
    
    cout<<endl;
    return 0;
}