#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int d = (nums[0]+nums[nums.size()-1])/2;
        int mid = nums[nums.size()/2], ans = 0;      //storing median of the array in the mid variable
        for(int i=0; i<nums.size(); i++)
        {
            ans += abs(nums[i]-mid);      //adding up the absolute difference b/w median and each element of the array
        }
        return ans;
    }
};

int main()
{
    vector<int> nums = {1,2,3};
    Solution sol;
    int res =sol.minMoves2(nums);
    cout << res << " ";
    
    cout<<endl;
    return 0;
}