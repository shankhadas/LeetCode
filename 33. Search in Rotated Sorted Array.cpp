#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int binary_Search(vector<int>& nums, int target, int l, int r) {
        while(l <= r) {
            int mid = l+(r-l)/2;
            if(target == nums[mid])
                return mid;
            if(target < nums[mid])
                r = mid - 1;
            else
                l = mid + 1;
        }
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        if(n==0)
            return -1;
        int l = 0;
        int r = n-1;
        while(l < r) {
            int mid = l+(r-l)/2;
            if(nums[mid] > nums[r])
                l = mid+1;
            else
                r = mid;
        }
        if(target <= nums[n-1])
            return binary_Search(nums, target, l, n-1);
        else
            return binary_Search(nums, target, 0, l-1);
    }
};

int main()
{
    vector<int> v = {4,5,6,7,0,1,2};
    int k = 0;
    Solution sol;
    int n=sol.search(v, k);
    cout<<n<<" ";
    
    cout<<endl;
    return 0;
}