#include <bits/stdc++.h>

using namespace std;
/*
Time complexity: O(N)
Space complexity: O(1)
*/

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start_point = 0, total_gas = 0, total_cost = 0, curr_gas = 0;
        for(int i=0; i<gas.size(); i++){
            total_gas += gas[i];
            total_cost += cost[i];
            curr_gas += gas[i] - cost[i];
            if(curr_gas < 0){
                start_point = i+1;
                curr_gas = 0;
            }
        }
        return total_gas < total_cost ? -1 : start_point;
    }
};

int main()
{
    vector<int> gas = {5,1,2,3,4}, cost = {4,4,1,5,1};

    Solution sol;
    cout << sol.canCompleteCircuit(gas, cost) << "\n";
        
    cout<<endl;
    return 0;
}