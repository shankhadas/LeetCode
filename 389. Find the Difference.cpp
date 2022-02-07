#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        char a=0;
        for(char c : s)
            a ^=c;
        for(char c : t)
            a ^=c;
        return a;
    }
};

int main()
{
    string s = "abcd", t = "abcde";
    Solution sol;
    char n=sol.findTheDifference(s, t);
    
    cout << n << " ";
    
    cout<<endl;
    return 0;
}