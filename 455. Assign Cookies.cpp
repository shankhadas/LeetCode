//
// Created by das on 1/1/24.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int res = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        for(int i=0,j=0; i<g.size() && j<s.size(); j++) {
            if(s[j] >= g[i]) {
                i++;    // only i should increment here as g has to be >/= with s to get started. So comparison will happen with s size.
                res++;
            }
        }
        return res;
    }
};

int main()
{
    vector<int> g = {10, 9, 8, 7}, s = {5, 6, 7, 8};
    Solution sol;
    int ans=sol.findContentChildren(g, s);
    cout << ans << " ";

    cout<<endl;
    return 0;
}