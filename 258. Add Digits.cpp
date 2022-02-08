#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int addDigits(int num) {
        int sum = 0;

        while(num/10 > 0){
            sum = 0;
            while(num){
                sum += num%10;
                num /= 10;
            }
            num = sum;
        }
        return num;
    }
};

int main()
{
    int num = 1;
    Solution sol;
    int n=sol.addDigits(num);
    
    cout << n << " ";
    
    cout<<endl;
    return 0;
}