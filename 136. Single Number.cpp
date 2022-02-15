#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for(auto i : nums)
            res ^=i;
        return res;
    }
};

int main()
{
    vector<int> v = {4,1,2,1,2};
    
    Solution sol;
    int n=sol.singleNumber(v);
    cout<<n<<" ";
    
    cout<<endl;
    return 0;
}