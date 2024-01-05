#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
      /*
      int i,n=nums.size(),ind;
      vector<int> v;
      v.push_back(nums[0]);
      for(i=1;i<n;i++){
        if(nums[i]>v.back()) 
          v.push_back(nums[i]);
        else {
          ind=lower_bound(v.begin(), v.end(), nums[i])-v.begin();
          v[ind]=nums[i];
        }
      }
      return v.size();
      */

      if (nums.empty()) {
        return 0;
      }

      int n = nums.size();
      vector<int> dp(n, 1);

      for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
          if (nums[i] > nums[j]) {
            dp[i] = max(dp[i], dp[j] + 1);
          }
        }
      }

      return *max_element(dp.begin(), dp.end());
    }
};

int main()
{
    vector<int> nums = {0,1,0,3,2,3};

    Solution sol;
    int res=sol.lengthOfLIS(nums);
    
    cout << res << "";
    
    cout<<endl;
    return 0;
}