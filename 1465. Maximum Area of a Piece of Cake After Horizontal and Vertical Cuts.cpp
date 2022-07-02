#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        horizontalCuts.push_back(h);
        sort(horizontalCuts.begin(), horizontalCuts.end());
		int maxh = horizontalCuts[0];
        for(int i=1; i<horizontalCuts.size(); i++){
            maxh = max(maxh, horizontalCuts[i] - horizontalCuts[i-1]);
        }
        
        verticalCuts.push_back(w);
        sort(verticalCuts.begin(), verticalCuts.end());
		int maxv = verticalCuts[0];
        for(int i=1; i<verticalCuts.size(); i++){
            maxv = max(maxv, verticalCuts[i] - verticalCuts[i-1]);
        }
		long mod = 1e9+7;
        return (maxh%mod)*(maxv%mod) % mod;
    }
};

int main()
{
    vector<int> horizontalCuts = {1,2,4}, verticalCuts = {1,3};
    int h = 5, w = 4;

    Solution sol;
    int n=sol.maxArea(h, w, horizontalCuts, verticalCuts);
    
    cout << n << " ";
    
    cout<<endl;
    return 0;
}