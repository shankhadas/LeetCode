#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        vector<int> hash(6,0);
        vector<int> phash(6,0);
        int window = p.size();
        int slen = s.size();
        if(slen<window)
            return ans;
        int left = 0,right = 0;
        while(right<window)
        {
            phash[p[right]-'a'] +=1;
            hash[s[right++]-'a'] +=1;
        }
        right -=1;
        while(right<slen)
        {
            if(phash == hash)
                ans.push_back(left);
            right+=1;
            if(right!=slen)
                hash[s[right]-'a'] +=1;
            hash[s[left]-'a'] -=1;
            left+=1;
        }
        return ans;
    }
};

int main()
{
    string s = "cbaebabacd", p = "abc";
    Solution sol;
    vector<int> v=sol.findAnagrams(s, p);
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    
    cout<<endl;
    return 0;
}