#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int>st;
        for(int i=s.size()-1; i>=0; i--){
            if(s[i] == ')')
                st.push(i);
            if(s[i] == '(')
                (st.size() && s[st.top()] == ')') ? st.pop() : st.push(i);
        }
        string ans = "";
        for(int i=0; i<s.size(); i++){
            if(st.size() && st.top() == i)
                st.pop();
            else 
                ans += s[i];
        }
        return ans;
    }
};

int main()
{
    string s = "((lee(t(c)o)de)";
    
    Solution sol;
    string n=sol.minRemoveToMakeValid(s);
    cout << n;
    
    cout<<endl;
    return 0;
}