#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);            // initially push -1 to the stack because if there is ) then we can not pop our stack if it is empty
        int ans = 0;
        
        for(int i=0;i<s.length();i++){
            if(s[i] == '(')     // if it is open parenthesis then push that index to the stack
                st.push(i);
            
            // if it is close then pop the stack 
            // and check it is empty or not if it is empty then push current value to it because if there is another ) then we can not pop our stack if it is empty
            // if it is not empty then find the length between the (current index i and stack top index) and store the max value in ans
            else{
                st.pop();
                if(st.empty())
                    st.push(i);
                else
                    ans = max(ans,i-st.top());
            }
        }        
        return ans;
    }
};

int main()
{
    string s = "(()";

    Solution sol;
    int res=sol.longestValidParentheses(s);
    
    cout<<res << " ";
    
    cout<<endl;
    return 0;
}