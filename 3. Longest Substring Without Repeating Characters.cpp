#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int length = 0, ptr1=0, ptr2=0;
        set<char>my_set;
        while(ptr1 < s.size()){
            if(!my_set.count(s[ptr1])){
                my_set.insert(s[ptr1]);
                ptr1++;
                length = max(length, (int)my_set.size());
            } else{
                my_set.erase(s[ptr2]);
                ptr2++;
            }
        }
        return length;
    }
};

int main()
{
    string s = "abcabcbb";
    Solution sol;
    int n=sol.lengthOfLongestSubstring(s);
    
    cout << n << " ";
    
    cout<<endl;
    return 0;
}