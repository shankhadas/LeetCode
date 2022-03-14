#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int val =0;
        for(auto i : nums) val ^= i; 
        return val;
    }
};

int main()
{
    vector<int> v = {3,3,7,7,10,11,11};
    
    Solution sol;
    int n=sol.singleNonDuplicate(v);
    cout<<n<<" ";
    
    cout<<endl;
    return 0;
}