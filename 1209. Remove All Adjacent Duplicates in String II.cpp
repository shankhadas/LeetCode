#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char, int>>vec;
        for(char c : s){
            if(vec.empty() || vec.back().first != c)
                vec.push_back({c, 1});
            else if(++vec.back().second == k)
                vec.pop_back();
        }
        string res = "";
        for(auto i : vec){
            res.append(i.second, i.first);
        }
        return res;
    }
};

int main()
{
    string s = "deeedbbcccbdaa";
    int k = 3;

    Solution sol;
    string n=sol.removeDuplicates(s, k);
    cout<<n<<" ";
    
    cout<<endl;
    return 0;
}