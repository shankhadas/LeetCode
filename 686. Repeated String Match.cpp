#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string temp = a;
        int count = 1;
        while(a.length() < b.length()){
          a += temp;
          count++;
        }
        if(a.find(b) != -1)
          return count;
        a += temp;
        if(a.find(b) != -1)
          return count+1;
        return -1;
    }
};

int main()
{
    string a = "abcd", b = "cdabcdab";
    
    Solution sol;
    int n=sol.repeatedStringMatch(a, b);
    cout << n << " ";
    
    cout<<endl;
    return 0;
}