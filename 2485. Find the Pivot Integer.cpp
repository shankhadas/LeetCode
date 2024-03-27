//
// Created by das on 27/3/24.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int pivotInteger(int n) {
        const int sum = (n * (n + 1) / 2);
        const int pivot = sqrt(sum);
        // If pivot * pivot is equal to sum (pivot found) return pivot, else return -1
        return pivot * pivot == sum ? pivot : -1;
    }
};

int main()
{
    int n = 8;

    Solution sol;
    int res=sol.pivotInteger(n);

    cout << res <<" ";

    cout<<endl;
    return 0;
}
