#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minPartitions(string n) {
        int mx = 0;
        for(int i =0; i<n.size(); i++)
            mx = max(mx, n[i] - '0');
        return mx;

        // int r = *max_element(n.begin(), n.end());
        // return r-'0';
    }
};

int main()
{
    string n = "32";

    Solution sol;
    int res=sol.minPartitions(n);
    cout << res << " ";
    
    cout<<endl;
    return 0;
}