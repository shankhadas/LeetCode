#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
        /*
        vector<int>res;
        for(int i=0; i<=n; i++){
            int sum = 0, num = i;
            while(num > 0){
                sum += num % 2;
                num /= 2;
            }
            res.push_back(sum);
        }
        return res;
        */

       vector<int>res(n+1, 0);
       for(int i=1; i<=n ;i++){
           res[i] = 1 + res[i & (i-1)];
       }
       return res;
    }
};

int main()
{
    int val = 5;    
    Solution sol;
    vector<int> n=sol.countBits(val);
    for(int i=0; i<n.size(); i++){
        cout << n[i] << " ";
    }
    
    cout<<endl;
    return 0;
}