#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        //return __builtin_popcount(n);

        int ans = 0;
        for (int i = 0; i < 32; ++i){
            if (n % 2 == 1) {
                ++ans;
            }
            n >>= 1;
        }
        return ans;
    }
};

int main()
{
    uint32_t n = 00000000000000000000000000001011;

    Solution sol;
    int res=sol.hammingWeight(n);
    
    cout<<res << " ";
    
    cout<<endl;
    return 0;
}