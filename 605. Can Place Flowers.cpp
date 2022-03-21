#include <bits/stdc++.h>

using namespace std;

//https://leetcode.com/problems/partition-labels/discuss/1868842/JavaC%2B%2B-VISUALLY-EXPLAINEDDDDD!!

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        for(int i = 0; i < flowerbed.size(); i++){
            if(flowerbed[i] == 0){
                int prev = (i == 0 || flowerbed[i - 1] == 0) ? 0 : 1;
                int next = (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0) ? 0 : 1;
                
                if(prev == 0 && next == 0){
                    flowerbed[i] = 1;
                    count++;
                }
            }
        }
        return count >= n;
    }
};

int main()
{
    vector<int> flowerbed = {1,0,0,0,1}; 
    int n = 2
    
    Solution sol;
    bool n=sol.canPlaceFlowers(flowerbed, n);
    cout << n <<" ";
    
    cout<<endl;
    return 0;
}