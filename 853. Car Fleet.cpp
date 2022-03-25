#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        map<int, double> pos_time_map;
        
        for (int i = 0; i < n; ++i) {  
            pos_time_map[-position[i]] = ((target-position[i])*1.0)/speed[i];       // using map with negative pos 
        }                                                                           // so map will keep them in sort order.
        
        int ans = 0;            // every time a new slow member is choosen we are essentially choosing a new fleet
                                // because its a bottle neck for previous cars.
        
        double curtime = 0;     // assuming nth(our cars are from 0 to n-1) car default case as car takes 0 time to reach target.
        
        for (auto it : pos_time_map) {      // if we get a new slow car then that will be bottle neck for previous people.
            if (it.second > curtime) {      // sp update with slow car't time every time, slow care means more time.
                curtime = it.second;
                ans++;
            }
        }
        return ans;
    }
};

int main()
{
    int target = 12;
    vector<int> position = {10,8,0,5,3}, speed = {2,4,1,1,3};
    Solution sol;
    int n=sol.carFleet(target, position, speed);
    
    cout << n << " ";
    
    cout<<endl;
    return 0;
}