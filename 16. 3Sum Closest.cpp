#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int result = nums[0] + nums[1] + nums[2];

        for(int i=0; i<n-2; i++){   // n-2 is to maintain sum of the last 3 elements in the array
            int s_ptr = i+1, l_ptr=n-1;
            while(s_ptr < l_ptr){
                int curr_sum = nums[i] + nums[s_ptr] + nums[l_ptr];
                if(curr_sum > target)
                    l_ptr--;
                else
                    s_ptr++;
                
                if(abs(curr_sum - target) < abs(result - target))
                    result = curr_sum;
            }
        }
        return result;
    }
};

int main()
{
    vector<int> v{0, 2, 1, -3};
    int target = 1;
    Solution sol;
    int n=sol.threeSumClosest(v, target);
    
    cout << n << " ";
    
    cout<<endl;
    return 0;
}