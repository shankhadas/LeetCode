#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int duplicate = -1;
        for(int i=0; i<nums.size(); i++){
            int val = abs(nums[i]);
            if(nums[val-1] >= 0)
                nums[val-1] = -nums[val-1];
            else{
                duplicate = val;
                break;
            }
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i] < 0)
                nums[i] = -nums[i];
        }
        return duplicate;
    }
};

int main()
{
    vector<int> v{1,8,6,2,5,4,8,3,7};
    Solution sol;
    int n=sol.findDuplicate(v);
    
    cout << n << " ";
    
    cout<<endl;
    return 0;
}