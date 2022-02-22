#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int res = 0;
        for(auto i : columnTitle){
            res *= 26;
            res += (i - 'A' + 1);
        }
        return res;
    }
};

int main()
{
    string columnTitle = "ZY";
    Solution sol;
    int n=sol.titleToNumber(columnTitle);
    
    cout << n << " ";
    
    cout<<endl;
    return 0;
}