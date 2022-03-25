#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int calculate(string s) {
        int total = 0;
        vector<int> signs(2, 1);
        for(int i=0; i<s.size(); i++){
            char c = s[i];
            if(c >= '0'){
                long long number = 0;
                while(i < s.size() && s[i] >= '0')
                    number = 10*number + s[i++] - '0';
                total += signs.back() * number;
                signs.pop_back();
                i--;
            }else if(c == ')')
                signs.pop_back();
            else if(c != ' ')
                signs.push_back(signs.back() * (c == '-' ? -1 : 1));
        }
        return total;
    }
};

int main()
{
    // string s = "(1+(4+5+2)-3)+(6+8)";
    string s = "2147483647";
    
    Solution sol;
    int n=sol.calculate(s);
    
    cout << n << " ";
    
    cout<<endl;
    return 0;
}