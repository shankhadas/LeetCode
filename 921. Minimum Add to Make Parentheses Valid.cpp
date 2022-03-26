#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<int>stk;
        int count=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='(')
                stk.push('(');
            if(s[i]==')'){
                if(stk.empty())
                    count++;
                else
                    stk.pop();
            }
        }
        return count+stk.size();
    }
};

int main()
{
    string s = "(((";
    
    Solution sol;
    int n=sol.minAddToMakeValid(s);
    cout << n << " ";
    
    cout<<endl;
    return 0;
}