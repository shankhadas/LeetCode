#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        return nums[nums.size()-k];
    }
};

int main()
{
    vector<int> nums = {3,2,1,5,6,4};
    int k = 2;
    
    Solution sol;
    int res=sol.findKthLargest(nums, k);
    cout << res << " ";
    
    cout<<endl;
    return 0;
}