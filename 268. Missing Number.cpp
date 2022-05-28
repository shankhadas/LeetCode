#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        int res = size*(size+1)/2;
        int sum =0;
        for(int i=0; i<=size-1; i++){
            sum +=nums[i];
        }
        return res-sum;
    }
};

int main()
{
    vector<int> nums = {9,6,4,2,3,5,7,0,1};

    Solution sol;
    int res=sol.missingNumber(nums);
    
    cout<<res << " ";
    
    cout<<endl;
    return 0;
}