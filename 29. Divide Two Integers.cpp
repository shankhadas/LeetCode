#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int divide(int dividend, int divisor) {
        //Handling corner cases
        if(dividend==INT_MIN && divisor==-1) return INT_MAX;
        if(dividend==INT_MIN && divisor==1) return INT_MIN;
        long int dd = abs(dividend), dv = abs(divisor);    //Converting divisors and dividend to their positive values
        int res=0;
        while(dv<=dd) {
            long int mul=dv, tmp=1;
            while(mul<=dd-mul) {
                mul+=mul;
                tmp+=tmp;
            }
            res+=tmp;
            dd-=mul;

        }
        if((dividend<0&&divisor>0) || (dividend>0&&divisor<0)) return -res;         //If either of dividend or divisor is negative our result will be negative
        return res;
    }
};

int main()
{
    int dividend = 10, divisor = 3;

    Solution sol;
    int res=sol.divide(dividend, divisor);
    
    cout << res << "";
    
    cout<<endl;
    return 0;
}