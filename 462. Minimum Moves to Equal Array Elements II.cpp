#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int mid = nums[nums.size()/2], ans = 0;      
        for(int i=0; i<nums.size(); i++){
            ans += abs(nums[i]-mid);      
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