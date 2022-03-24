#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int ans=0; 
        while(target != startValue){
            if(target < startValue || target % 2)
                target++;
            else 
                target /= 2;
            ans++;
        }
        return ans;
    }
};

int main()
{
    int startValue = 5, target = 8;
    
    Solution sol;
    int n=sol.brokenCalc(startValue, target);
    
    cout << n << " ";
    
    cout<<endl;
    return 0;
}