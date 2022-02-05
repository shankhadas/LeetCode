#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size(), left = 0, right = 0, sum = 0, res = INT_MAX;
        while(right < n){
            sum += nums[right];
            if(sum < target){
                right++;
                continue;
            }

            while (sum >= target)
            {
                res = min(res, right - left + 1);
                sum -= nums[left];
                left++;
            }
            right++;
        }
        return res == INT_MAX ? 0 : res;
    }
};

int main()
{
    vector<int> nums{2,3,1,2,4,3};
    int target = 7;
    Solution sol;
    int n = sol.minSubArrayLen(target, nums);
    
    cout << n << " ";
    
    cout<<endl;
    return 0;
}