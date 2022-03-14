#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string simplifyPath(string path) {
        string res, tmp;
        vector<string> stk;
        stringstream ss(path);
        while(getline(ss,tmp,'/')) {
            if (tmp == "" || tmp == ".") 
                continue;
            if (tmp != "..") 
                stk.push_back(tmp);
            else if (!stk.empty()) 
                stk.pop_back();
        }
        for(auto str : stk) 
            res += "/"+str;
        return res.empty() ? "/" : res;
    }
};

int main()
{
    string path = "/home/";
    
    Solution sol;
    string n=sol.simplifyPath(path);
    cout << n;
    
    cout<<endl;
    return 0;
}