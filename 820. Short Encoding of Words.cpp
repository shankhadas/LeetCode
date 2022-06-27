#include <bits/stdc++.h>

using namespace std;

/*
    TC: O(NlogN)
    SC: O(Length of all words)
*/

class Solution {
public:
    static bool myComp(string s1, string s2){
        if(s1.size() == s2.size())
            return s1 > s2;
        else    
            return s1.size() > s2.size();
    }

    int minimumLengthEncoding(vector<string>& words) {
        sort(words.begin(), words.end(), myComp);
        string res = "";
        for(auto i : words){
            if(res.find(i+"#") == string::npos)
                res.append(i+"#");
        }
        return res.size();
    }
};

int main()
{
    // vector<string> words = {"time", "me", "bell"};
    vector<string> words = {"feipyxx","e"};
    Solution sol;
    int n=sol.minimumLengthEncoding(words);
    
    cout << n << " ";
    
    cout<<endl;
    return 0;
}