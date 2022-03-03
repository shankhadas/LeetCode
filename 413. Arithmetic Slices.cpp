#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size() < 3) return 0;
        int count = 0, diff = 0, idx = 0;
        int prev_diff = nums[1] - nums[0];
        for(int i=1; i < nums.size()-1; i++){
            diff = nums[i+1] - nums[i];
            if(diff == prev_diff)
                ++idx;
            else{
                prev_diff = diff;
                idx = 0;
            }
            count += idx;
        }
        return count;
    }
};

int main()
{
    vector<int>nums = {1,2,3,4};
    Solution sol;
    int n=sol.numberOfArithmeticSlices(nums);
    cout << n;
    
    cout<<endl;
    return 0;
}