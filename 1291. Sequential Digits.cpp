//
// Created by das on 2/2/24.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;

        for(int i=1; i<=9; i++){
            int digit = i;
            int nextDigit = i + 1;

            while(digit <= high && nextDigit <= 9){
                digit = digit * 10 + nextDigit;
                if(low <= digit && digit <= high){
                    ans.push_back(digit);
                }
                ++nextDigit;
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    int low = 100, high = 300;

    Solution sol;
    vector<int> res=sol.sequentialDigits(low, high);

    for(auto a : res){
        cout << a << " ";
    }

    cout<<endl;
    return 0;
}