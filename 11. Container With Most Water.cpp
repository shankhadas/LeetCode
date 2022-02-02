#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0, start = 0, end = height.size() - 1;
        while(start < end) {
            int dist = min(height[start], height[end]);
            int width = end - start;

            int currentArea = dist * width;
            maxArea = max(currentArea, maxArea);
            if(height[start] < height[end]) {
                start++;
            } else {
                end--;
            }
        }
        return maxArea;
    }
};

int main()
{
    vector<int> v{1,8,6,2,5,4,8,3,7};
    Solution sol;
    int n=sol.maxArea(v);
    
    cout << n << " ";
    
    cout<<endl;
    return 0;
}