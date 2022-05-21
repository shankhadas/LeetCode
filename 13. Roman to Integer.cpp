#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>map;
        map['I']=1;
        map['V']=5;
        map['X']=10;
        map['L']=50;
        map['C']=100;
        map['D']=500;
        map['M']=1000;
        int num=0;
        int len=s.length();
        int i=len-1;
        while(i>=0){
            if(i==len-1 || map[s[i]]>=map[s[i+1]])
                num=num+map[s[i]];
            else
                num=num-map[s[i]];
            i--;
        }
        return num;
    }
};

int main()
{
    string s = "III";

    Solution sol;
    int res=sol.romanToInt(s);
    
    cout<<res << " ";
    
    cout<<endl;
    return 0;
}