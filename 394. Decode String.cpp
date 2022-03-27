#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string decodeString(string s) {
        stack<string> chars;
        stack<int> nums;
        string res;
        int num = 0;
        for(char c : s) {
            if(isdigit(c)) {
                num = num*10 + (c-'0');                              
            }
            else if(isalpha(c)) {
                res.push_back(c);                
            }
            else if(c == '[') {
                chars.push(res);
                nums.push(num);
                res = "";
                num = 0;
            }
            else if(c == ']') {
                string tmp = res;
                for(int i = 0; i < nums.top()-1; ++i) {
                    res += tmp;
                }
                res = chars.top() + res;
                chars.pop(); nums.pop();
            }
        }
        return res;
    }
};

int main()
{
    string s = "2[abc]3[cd]ef";
    
    Solution sol;
    string n=sol.decodeString(s);
    cout << n << " ";
    
    cout<<endl;
    return 0;
}