#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numberOfSteps(int num) {
        int count =0;
        while(num > 0){
            if(num % 2 == 0){
                num = num/2;
                count++;
            }else{
                num -= 1;
                count++;
            }
        }
        return count;
    }
};

int main()
{
    int num = 14;
    

    Solution sol;
    int res=sol.numberOfSteps(num);
    cout << res;
    
    cout<<endl;
    return 0;
}