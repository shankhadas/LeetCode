#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int countSubstrings(string s) {
        int n=s.size();
        int ans=0;

        for(int i=0;i<n;i++){
            int x=i-1,y=i+1;
            ans++;
            while(x>=0 and y<n and s[x]==s[y]){
                ans++;
                x--;
                y++;
            }
            x=i,y=i+1;
            while(x>=0 and y<n and s[y]== s[x]){
                ans++;
                x--;
                y++;
            }
        }
        return ans;
    }
};

int main()
{
    string s = "abc";

    Solution sol;
    int res=sol.countSubstrings(s);
    
    cout<<res << " ";
    
    cout<<endl;
    return 0;
}