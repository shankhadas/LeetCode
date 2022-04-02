#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool ispalindrome(string s, int start,int end) { 
        while(start<end) {
            if(s[start] != s[end]) 
                return false; 
            start++; 
            end--; 
        } 
        return true; 
    } 
    bool validPalindrome(string s) { 
        int start=0; int end=s.size()-1; 
        while(start<end) { 
            if(s[start]!=s[end]) { 
                return ( ispalindrome(s,start+1,end) || ispalindrome(s,start,end-1) ); 
            } 
            start ++; 
            end--; 
        } 
        return true; 
    }
};

int main()
{
    string s = "abca";
    
    Solution sol;
    bool n=sol.validPalindrome(s);
    cout << n << " ";
    
    cout<<endl;
    return 0;
}