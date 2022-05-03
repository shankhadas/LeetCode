#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int prod = 1, left = 0, count = 0;
        for(int i=0; i<nums.size(); i++){
          prod *= nums[i];
          while(left <= i && prod >= k){
            prod /= nums[left];
            left++;
          }
          count += i-left+1;
        }
        return count;
    }
};

int main()
{
    vector<int> nums = {10,5,2,6};
    int k = 100;
    
    Solution sol;
    int n=sol.numSubarrayProductLessThanK(nums, k);
    cout << n << " ";
    
    cout<<endl;
    return 0;
}