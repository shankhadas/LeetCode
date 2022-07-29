#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool helper(string s1, string s2){
        if(s1.size() != s2.size()) 
            return false;
        unordered_map<char, int> m1, m2;
        for(int i=0; i<s1.size(); i++){
            if(m1[s1[i]] != m2[s2[i]]) 
                return false;
            m1[s1[i]] = i+1;
            m2[s2[i]] = i+1;
        }
        return true;
    }

    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        for(auto str : words){
            if(helper(str, pattern))
                ans.push_back(str);
        }
        return ans;
    }
};

int main()
{
    vector<string> words = {"abc","deq","mee","aqq","dkd","ccc"};
    string pattern = "abb";
    
    Solution sol;
    vector<string> res=sol.findAndReplacePattern(words, pattern);
    
    for(auto it : res)
        cout << it << " ";
    
    cout<<endl;
    return 0;
}