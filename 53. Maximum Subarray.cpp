#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maximum(vector<int>&nums, int size){
        int res = INT_MIN;
        for(int i=0; i<size; i++){
            if(res < nums[i])
                res = nums[i];
        }
        return res;
    }
    
    int maxSubArray(vector<int>& nums) {
        int max_num = maximum(nums, nums.size());
        int res = 0;
        int max_till = 0;
        
        if(max_num < 0)
            return max_num;
        for(int i=0; i<nums.size(); i++){
            max_till += nums[i];
            max_till = max(max_till, 0);
            res = max(max_till, res);
        }
        return res;
    }
};

int main()
{
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    Solution sol;
    int n=sol.maxSubArray(nums);
    
    cout << n << " ";
    
    cout<<endl;
    return 0;
}