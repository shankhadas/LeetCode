#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string removeKdigits(string num, int k) {
        if(num.length() == k)
            return "0";
        int i=0;
        while(k > 0) {
            i = (i>0) ? (i-1) : 0;
            while(i < num.length()-1 && num[i] <= num[i+1])
                i++;
            num.erase(num.begin() + i);
            k--;
        }
        auto val = num.find_first_not_of("0");
        num.erase(0, val);
        if(num.length() == 0)
            return "0";
        return num;
    }
};

int main()
{
    string num = "1432219";
    int k = 3;
    Solution sol;
    string n=sol.removeKdigits(num, k);
    
    cout << n << " ";
    
    cout<<endl;
    return 0;
}