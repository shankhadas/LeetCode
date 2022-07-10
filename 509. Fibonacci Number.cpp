#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int fib(int n) {
        if(n <= 1)
            return n;
        int a =0, b=1, res;
        for(int i=2; i<=n;i++){
            res = a+b;
            a=b;
            b=res;
        }
        return res;
        
        /*
        if(n <= 1)
            return n;
        return fib(n-1) + fib(n-2);
        */
    }
};

int main()
{
    int n = 7;
    Solution sol;
    int res=sol.fib(n);
    cout << res << " ";
    
    cout<<endl;
    return 0;
}