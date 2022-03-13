#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        if(s.size() < 1) return false;
        stack<char>stk;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                stk.push(s[i]);
            } else{
                if(stk.empty()) 
                    return false;
                if((s[i]==')' && stk.top()!='(') || (s[i]=='}' && stk.top()!='{') || (s[i]==']' && stk.top()!='[')) 
                    return false;
                stk.pop();
            }
        }
        return stk.empty();

        /*
        stack<char> st;
        for(char c: s){
            if(c == '(' || c == '{' || c == '[')
                st.push(c);
            else{
                if(st.empty())
                    return false;
                if(c == ')' && st.top() != '(')
                    return false;
                if(c == '}' && st.top() != '{')
                    return false;
                if(c == ']' && st.top() != '[')
                    return false;
                st.pop();
            }
        }
        return st.empty();
        */
    }
};

int main()
{
    string s = "()[]{}";
    Solution sol;
    bool n=sol.isValid(s);
    
    cout << n << " ";
    
    cout<<endl;
    return 0;
}