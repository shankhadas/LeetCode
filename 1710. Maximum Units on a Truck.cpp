#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    static bool myComp(vector<int>& v1, vector<int>& v2){
        return v1[1] > v2[1];
    }

    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int ans = 0;
        sort(boxTypes.begin(), boxTypes.end(), myComp);

        for(auto it : boxTypes){
            int numBoxes = min(truckSize, it[0]);
            ans +=  numBoxes * it[1];
            truckSize -= numBoxes;
        }
        return ans;
    }
};

int main()
{
    vector<vector<int>> boxTypes = {{3,1},{2,2},{1,3}};
    int truckSize = 4;

    Solution sol;
    int res =sol.maximumUnits(boxTypes, truckSize);
    cout << res << " ";
    
    cout<<endl;
    return 0;
}