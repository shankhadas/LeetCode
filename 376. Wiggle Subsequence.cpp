#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        
        int up = 1, down = 1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i] - nums[i-1] > 0)
                up = down+1;
            else if(nums[i] - nums[i-1] < 0)
                down = up+1;
        }
        return max(up,down);
        

       /*
        if(nums.size() < 2) return nums.size();
        int prev = nums[1] - nums[0];
        int count = prev != 0 ? 2 : 1;
        for(int i=2; i<nums.size(); i++){
                int diff = nums[i] - nums[i-1];
                if((diff < 0 && prev >= 0) || (diff > 0 && prev <= 0)){
                    count++;
                    prev = diff;
                }
        }
        return count;
        */
    }
};

int main()
{
    vector<int> nums = {1,7,4,9,2,5};
    // vector<int> nums = {1,2,3,4,5,6,7,8,9};
    
    Solution sol;
    int n=sol.wiggleMaxLength(nums);
    cout<<n<<" ";
    
    cout<<endl;
    return 0;
}