#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int m=0;
        for(int i=0; i<nums.size();i++){
            if(i>m || m>=nums.size()-1)
                break;
            m=max(m,i+nums[i]);
        }
        return (m>=nums.size()-1);
    }
};

int main()
{
    vector<int> v = {2,3,1,1,4};

    Solution sol;
    int n=sol.canJump(v);
    cout<<n<<" ";
    
    cout<<endl;
    return 0;
}