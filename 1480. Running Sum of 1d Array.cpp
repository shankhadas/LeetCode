#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            nums[i] = sum;
        }
        return nums;
    }
};

int main()
{
    vector<int> nums = {1,2,3,4};

    Solution sol;
    vector<int> res=sol.runningSum(nums);

    for(auto i : res)
        cout<<i << " ";
    
    cout<<endl;
    return 0;
}