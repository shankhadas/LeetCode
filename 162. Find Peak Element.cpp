#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        while(left <= right){
            int mid = (left+right) / 2;
            if(mid+1 < nums.size() && nums[mid] < nums[mid+1])
                left = mid+1;
            else
                right = mid-1;
        }
        return left;
    }
};

int main()
{
    vector<int> nums = {1,2,1,3,5,6,4};
    Solution sol;
    int n=sol.findPeakElement(nums);
    
    cout << n << " ";
    
    cout<<endl;
    return 0;
}