#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        for(int i = 0;i < nums.size();i++) {
            if(nums[abs(nums[i]) - 1] > 0) 
                nums[abs(nums[i]) - 1] = - nums[abs(nums[i]) - 1];
            else res.push_back(abs(nums[i]));

        }
        return res;
    }
};

int main()
{
    vector<int> v = {4,3,2,7,8,2,3,1};
    
    Solution sol;
    vector<int> n=sol.findDuplicates(v);
    for(auto i : n){
        cout << i << " ";
    }
    
    cout<<endl;
    return 0;
}