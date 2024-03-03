//
// Created by das on 3/3/24.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> t;
        for (int i = 0; i < nums.size(); i++)
            t.push_back(nums[i] * nums[i]);             // Square each element.
        sort(t.begin(), t.end());                 // Sort the squared values.
        return t;
    }
};

int main()
{
    vector<int> nums = {-4,-1,0,3,10};

    Solution sol;
    vector<int> res=sol.sortedSquares(nums);

    for(auto a : res){
        cout << a <<" ";
    }

    cout<<endl;
    return 0;
}
