#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st;
        stack<char>tt;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '#' && !st.empty())
                st.pop();
            else if(s[i] != '#')
                st.push(s[i]);
        }
        for(int i=0; i<t.size(); i++){
            if(t[i] == '#' && !tt.empty())
                tt.pop();
            else if(t[i] != '#')
                tt.push(t[i]);
        }
        return st==tt;
    }
};

int main()
{
    // string s = "ab##", t = "c#d#"; 
    string s = "y#fo##f", t = "y#f#o##f";
    
    Solution sol;
    bool n=sol.backspaceCompare(s, t);
    cout<< n << " ";
    
    cout<<endl;
    return 0;
}