#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minimumSum(int num) {
        string s = to_string(num);
        sort(s.begin(), s.end());
        int res = (s[0] - '0' + s[1] - '0') * 10 + s[2] - '0' + s[3] - '0';
        return res;
    }
};

int main()
{
    int num = 2932;
    Solution sol;
    int n = sol.minimumSum(num);
    
    cout << n << " ";
    
    cout<<endl;
    return 0;
}