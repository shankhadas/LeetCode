#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int len=0,i,l,r;
        string ans="";
        for(i=0;i<n;i++){
            //odd length substring
            l=i;
            r=i;
            while(l>=0 && r<n && s[l]==s[r]){
                if(r-l+1>len){
                    len=r-l+1;
                    ans=s.substr(l,len);
                }
                --l;
                ++r;
            }
            //even length substring
            l=i;
            r=i+1;
            while(l>=0 && r<n && s[l]==s[r]){
                if(r-l+1>len){
                    len=r-l+1;
                    ans=s.substr(l,len);
                }
                --l;
                ++r;
            }
        }
        return ans;
    }
};

int main()
{
    string s = "ac";

    Solution sol;
    string res=sol.longestPalindrome(s);
    
    cout<<res << " ";
    
    cout<<endl;
    return 0;
}