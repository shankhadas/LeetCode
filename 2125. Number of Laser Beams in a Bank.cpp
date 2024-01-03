//
// Created by das on 3/1/24.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prev = 0, ans = 0;

        for(string s : bank) {
            int count = 0;
            for(char c : s) {
                if(c == '1')
                    count++;
            }
            if(count) {
                ans += prev * count;
                prev = count;
            }
        }
        return ans;
    }
};

int main()
{
    vector<string> bank = {"011001","000000","010100","001000"};
    Solution sol;
    int res=sol.numberOfBeams(bank);

    cout<< res << endl;

    cout<<endl;
    return 0;
}