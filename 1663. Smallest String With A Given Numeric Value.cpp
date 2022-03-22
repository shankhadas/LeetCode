#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string getSmallestString(int n, int k) {
        string str(n, 'a');
        k -= n;
        while(k > 0){
            n--;
            str[n] += min(25, k);
            k -= min(25, k);
        }
        return str;
    }
};

int main()
{
    int n = 3, k = 27;
    
    Solution sol;
    string val=sol.getSmallestString(n, k);
    
    cout << val << " ";
    
    cout<<endl;
    return 0;
}