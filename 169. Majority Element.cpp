#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int , int>my_map;
        for(auto i : nums){
            my_map[i]++;
        }
        int val_first = 0, val_second=0;
        for(auto i : my_map){
            if(i.second > val_second){
                val_first = i.first;
                val_second = i.second;
            }
        }
        return val_first;
    }
};

int main()
{
    vector<int> num = {3,2,3};
    Solution sol;
    int n=sol.majorityElement(num);
    
    cout << n << " ";
    
    cout<<endl;
    return 0;
}