#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int i = 0, j = 1, count = 0;
        while(j < nums.size()){
            if((nums[j] - nums[i]) < k)
                j++;
            else if((nums[j] - nums[i]) > k){
                i++;
                while(i == j){
                    j++;
                }
            }
            else{
                count++;
                i++;
                j++;
                while(j<nums.size() && nums[j]==nums[j-1]){
 					j++;
 				}
            }
        }
        return count;
    }
};

int main()
{
    vector<int> intervals = {1,3,1,5,4};
    int k = 0;
    Solution sol;
    int n=sol.findPairs(intervals, k);
    
    cout << n << " ";
    
    cout<<endl;
    return 0;
}