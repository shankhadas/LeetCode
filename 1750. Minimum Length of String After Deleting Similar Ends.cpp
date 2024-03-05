//
// Created by das on 5/3/24.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minimumLength(string s) {
        int left = 0, right = s.size() - 1;

        while((left < right) && (s[left] == s[right])) {
            char ch = s[left];
            while(left <= right && s[left] == ch)
                left++;
            while(left <= right && s[right] == ch)
                right--;
        }
        return right - left + 1;
    }
};

int main()
{
    string s = "cabaabac";

    Solution sol;
    int res=sol.minimumLength(s);

    cout << res <<" ";

    cout<<endl;
    return 0;
}
