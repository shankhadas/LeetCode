#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<string, int> s_map;
        vector<int> p_map(26,0);
        int i = 0, size = pattern.size();
        istringstream iss(s);

        for(string ip; iss >> ip; i++){
            if(i == size || s_map[ip] != p_map[pattern[i] - 'a'])
                return false;
            s_map[ip] = p_map[pattern[i] - 'a'] = i+1;
        } 
        return i == size;   // with out this line
                            // pattern = "jquery", s = "jquery"; will fail
    }
};

int main()
{
    // string pattern = "abba", s = "dog cat cat dog cat";
    // string pattern = "aaa", s = "aa aa aa aa";
    string pattern = "jquery", s = "jquery";

    Solution sol;
    cout << sol.wordPattern(pattern, s) << "\n";
        
    cout<<endl;
    return 0;
}