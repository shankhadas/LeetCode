//
// Created by das on 20/2/24.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>v1,v2,ans;

        for(int i =0;i<nums.size();i++){
            if(nums[i]>0)
                v1.push_back(nums[i]);
            else
                v2.push_back(nums[i]);
        }

        int ind1=0,ind2=0;

        while(ind2<nums.size()/2){
            ans.push_back(v1[ind1]);
            ind1++;
            ans.push_back(v2[ind2]);
            ind2++;
        }
        return ans;
    }
};

int main()
{
    vector<int> nums = {3,1,-2,-5,2,-4};
    Solution sol;
    vector<int> ans = sol.rearrangeArray(nums);

    for(auto a : ans)
        cout << a << " ";

    cout<<endl;
    return 0;
}