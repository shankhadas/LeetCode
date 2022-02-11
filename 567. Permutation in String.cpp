#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m[26] = {0}; //character array
        for(char c : s1) m[c - 'a']++;
        int j = 0, i = 0, total_chars = s1.size();
        while(j < s2.size()){
            if(m[s2.at(j++) - 'a']-- > 0)
                total_chars--;
            if(total_chars == 0) 
                return true;
            //shifting of window
            if(j - i == s1.size() && m[s2.at(i++) - 'a']++ >= 0)
                total_chars++;
        }
        return false;
    }
};

int main()
{
    string s1 = "ab", s2 = "eidboaoo";

    Solution sol;
    int n=sol.checkInclusion(s1, s2);
    cout<<n<<" ";
    
    cout<<endl;
    return 0;
}