#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = nums.size()-1;
        int count = 0;
        while(i < j){
          if(nums[i] + nums[j] == k){
            count++;
            i++; j--;
          }
          if(nums[i] + nums[j] < k){
            i++;
            // continue;
          }
          if(nums[i] + nums[j] > k){
            j--;
            // continue;
          }
        }
        return count;
    }
};

int main()
{
    vector<int> nums = {1,2,3,4};
    int k = 5;
    
    Solution sol;
    int n=sol.maxOperations(nums, k);
    cout << n << " ";
    
    cout<<endl;
    return 0;
}