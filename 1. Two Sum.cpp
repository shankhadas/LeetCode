#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int>m;
        vector<int>v;
        for(int i=0; i<nums.size(); ++i){
            if(m.count(target-nums[i])){
                v.push_back(i);
                v.push_back(m[target-nums[i]]);
            }
            m[nums[i]] = i;
        }
        //reverse(v.begin(), v.end());
        return v;
    }
};

int main()
{
    vector<int> nums = {2,7,11,15};
    int target = 9;

    Solution sol;
    vector<int> res=sol.twoSum(nums, target);
    
    for(int i=0; i<res.size(); i++){
        cout<<res[i] << " ";
    }
    
    cout<<endl;
    return 0;
}