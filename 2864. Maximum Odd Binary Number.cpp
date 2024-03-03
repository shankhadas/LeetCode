//
// Created by das on 3/3/24.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int cnt1 = 0, cnt0 = 0;
        for (auto a : s) {
            if (a == '1')
                cnt1++;
            else if (a == '0')
                cnt0++;
        }
        string ans = string(cnt1 - 1, '1') + string(cnt0, '0') + '1';
        return ans;
    }
};

int main()
{
    string s = "010";

    Solution sol;
    string res=sol.maximumOddBinaryNumber(s);
    cout << res <<" ";

    cout<<endl;
    return 0;
}
