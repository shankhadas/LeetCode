#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        string res;
        string sym[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int val[] =    {1000, 900, 500, 400, 100,   90,   50,  40,   10,   9,   5,    4,   1};
        int i=0;
        while(num != 0){
            while(num >= val[i]){
                num -= val[i];
                res += sym[i];
            }
            i++;
        }
        return res;
    }
};

int main()
{
    int num = 3;

    Solution sol;
    string res=sol.intToRoman(num);
    
    cout<<res << " ";
    
    cout<<endl;
    return 0;
}