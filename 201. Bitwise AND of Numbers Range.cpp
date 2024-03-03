//
// Created by das on 21/2/24.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int shift=0;
        while(left < right){
            left >>= 1;
            right >>= 1;
            shift++;
        }
        return right << shift;
    }
};

int main() {
    int left = 5, right = 7;

    Solution sol;
    int res = sol.rangeBitwiseAnd(left, right);

    cout << res << " ";

    cout<<endl;
    return 0;
}