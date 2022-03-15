#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> um(nums.begin(), nums.end());
        return !(nums.size() == um.size());
    }
};

int main()
{
    vector<vector<int>> v = {{1,2,7},{3,6,7}};
    
    Solution sol;
    bool n=sol.containsDuplicate(v);
    cout<<n<<" ";
    
    cout<<endl;
    return 0;
}