#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        // return count(nums.begin(), nums.end(), target);
        int left = 0, right = nums.size()-1;
        while(left <= right){
            int mid = left + (right - left) /2;
            if(nums[mid] == target)
                return true;
            if(nums[left] == nums[mid] && nums[right] == nums[mid])
                left++, right--;
            else if(nums[left] <= nums[mid])
                if(nums[left] <= target && nums[mid] > target)
                    right = mid - 1;
                else
                    left = mid + 1;
            else
                if(nums[right] >= target && nums[mid] < target)
                    left = mid + 1;
                else
                    right = mid - 1;
        }
        return false;
    }
};

int main()
{
    // vector<int> nums = {2,5,6,0,0,1,2};
    vector<int> nums = {3,1};
    int target = 1;
    Solution sol;
    bool n = sol.search(nums, target);
    
    cout << n << " ";
    
    cout<<endl;
    return 0;
}