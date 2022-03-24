#include <bits/stdc++.h>

using namespace std;

//https://leetcode.com/problems/partition-labels/discuss/1868842/JavaC%2B%2B-VISUALLY-EXPLAINEDDDDD!!

class Solution {
public:
    int binarySearch(vector<int>&nums, int target){
        int left = 0, right = nums.size() - 1;
        while(left <= right){
            int mid = (left + right) / 2;
            if(nums[mid] < target)
                left = mid + 1;
            else    
                right = mid - 1;
        }
        return left;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size() == 0) return {-1, -1};
        int left = binarySearch(nums, target);
        int right = binarySearch(nums, target+1) - 1;
        if(left < nums.size() && nums[left] == target)
            return {left, right};
        return {-1, -1};
    }
};

int main()
{
    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;
    
    Solution sol;
    vector<int> n=sol.searchRange(nums, target);
    for(int i : n){
        cout << i << " ";
    }
    
    cout<<endl;
    return 0;
}