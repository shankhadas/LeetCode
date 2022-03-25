#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int calculate(string s) {
        stack<int> st;
        char sign = '+';
        int res = 0, temp = 0, n = s.size();
        for(int i=0; i<n; i++) {
            if(isdigit(s[i]))
                temp = temp*10 + (s[i] - '0');
            if(!isdigit(s[i]) && !isspace(s[i]) || i==n-1) {
                if(sign == '+')
                    st.push(temp);
                else if(sign == '-')
                    st.push(-temp);
                else {
                    int num;
                    if(sign == '*')
                        num = st.top() * temp;
                    else
                        num = st.top() / temp;
                    st.pop();
                    st.push(num);
                }
                sign = s[i];
                temp = 0;
            }
        }
        while(!st.empty()) {
            res += st.top();
            st.pop();
        }
        return res;
    }
};

int main()
{
    string s = " 3+5 / 2 ";
    
    Solution sol;
    int n=sol.calculate(s);
    
    cout << n << " ";
    
    cout<<endl;
    return 0;
}