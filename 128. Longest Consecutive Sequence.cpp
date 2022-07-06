#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size(); // extract the size of array
        if(n == 0) return 0; // if length of array is zero, then from here simply return 0
        
        sort(nums.begin(), nums.end()); // sort the array
        
        int mxLen = 0, currLen = 1; // put mxLen = 0, and currLen as 1
        
        for(int i = 1; i < n; i++) // traverse from the array
        {
            if(nums[i] == nums[i - 1] + 1) // this is the part of consecutive sequence
            {
                currLen++; // increase the curr Length by 1
            }
            else if(nums[i] != nums[i - 1]) // but if it is not equal
            {
                mxLen = max(mxLen, currLen); // update our mxLen 
                currLen = 1; // and reset the currLen with 1
            }
        }
        
        mxLen = max(mxLen, currLen); // update our mxLen 
        return mxLen; // Finally return mxLen
    }
};

int main()
{
    vector<int> nums = {0,3,7,2,5,8,4,6,0,1};

    Solution sol;
    int res=sol.longestConsecutive(nums);
    
    cout<<res << " ";
    
    cout<<endl;
    return 0;
}