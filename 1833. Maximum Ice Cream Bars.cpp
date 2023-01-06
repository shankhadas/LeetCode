#include <bits/stdc++.h>

using namespace std;
/*
Time complexity: O(N)
Space complexity: O(1)
*/

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int ans = 0;
        sort(costs.begin(), costs.end());
        if(coins < costs[0]) return 0;
        for(int i=0; i<costs.size(); i++){
            if(coins > 0 && coins >= costs[i]){
                coins -= costs[i];
                ans++;
                cout <<"\n"<< costs[i]<<"->"<<coins<<"\n";
            }
        }
        return ans;
    }
};

int main()
{
    // vector<int> costs = {1,3,2,4,1};
    vector<int> costs = {7,3,3,6,6,6,10,5,9,2};

    int coins = 56;

    Solution sol;
    cout << sol.maxIceCream(costs, coins) << "\n";
        
    cout<<endl;
    return 0;
}