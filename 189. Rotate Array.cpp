#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};

int main()
{
    vector<int> v = {1,2,3,4,5,6,7};
    int k = 3;
    
    Solution sol;
    sol.rotate(v, k);
    
    
    cout<<endl;
    return 0;
}