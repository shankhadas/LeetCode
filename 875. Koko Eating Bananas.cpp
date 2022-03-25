#include <bits/stdc++.h>

using namespace std;

//https://leetcode.com/problems/koko-eating-bananas/discuss/1703687/JavaC%2B%2B-A-very-very-well-detailed-explanation

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1, right = 1000000000;
        while(left < right){
            int mid = left + (right - left) / 2;
            int total = 0;
            for(int i : piles){
                total += (i + mid - 1) / mid;
            }
            if(total > h)
                left = mid + 1;
            else
                right = mid;
        }
        return left;
    }
};

int main()
{
    vector<int> piles = {30,11,23,4,20};
    int h = 6;
    
    Solution sol;
    int n=sol.minEatingSpeed(piles, h);

    cout << n << " ";
    
    cout<<endl;
    return 0;
}