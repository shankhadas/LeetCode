#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        if(x==0)
            return 0;

        int low=1,end=x,ans=0;

        while(low<=end){
            int mid=low+(end-low)/2;
            if(mid==(x/mid))
                return mid;
            else if(mid>(x/mid))
                end=mid-1;
            else{
                ans=mid;
                low=mid+1;
            }
        }
        return ans;
    }
};

int main()
{
    int x = 8;
    
    Solution sol;
    int res=sol.mySqrt(x);
    cout << res << " ";
    
    cout<<endl;
    return 0;
}