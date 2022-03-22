#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int least = INT_MAX;
        int profit = 0;
        int profit_today = 0;
        
        for(int i=0; i<prices.size(); i++){
            if(prices[i] < least){
                least = prices[i];
            }
            profit_today = prices[i] - least;
            if(profit < profit_today)
                profit = profit_today;
        }
        return profit;
    }
};

int main()
{
    vector<int> prices = {7,6,4,3,1};
    Solution sol;
    int n=sol.maxProfit(prices);
    
    cout << n << " ";
    
    cout<<endl;
    return 0;
}