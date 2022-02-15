#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // int l = 0;
        // int r = nums.size()-1;
        // while (l <= r)
        // {
        //    int mid = l + (r-l)/2;
        //    if(nums[mid] < target)
        //         l = mid + 1;
        //     else if(nums[mid] > target)
        //         r = mid - 1;
        //     else
        //         return mid;
        // }
        // return l;

        int low = 0, high = nums.size();
        while(low < high) {
            int mid = low + (high - low) / 2;
            if(nums[mid] < target)
                low = mid + 1;
            else
                high = mid;
        }
        return low; 
    }
};

int main()
{
    vector<int> num = {1,3};
    int target = 2;
    Solution sol;
    int n=sol.searchInsert(num, target);
    
    cout << n << " ";
    
    cout<<endl;
    return 0;
}