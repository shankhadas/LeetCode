#include<bits/stdc++.h>
using namespace std;

/*--------------------------------------Memoization---------------
    TC: 
    SC: 
*/

/*--------------------------------------Tabulation---------------
    TC: 
    SC: 
*/

/*--------------------------------------Space Optimized---------------
    TC: O(N)
    SC: O(1)
*/
 class Solution{
public:
    int func(vector<int> &arr){
        int ind = arr.size();
        int prev = arr[0];
        int prev2 = 0;
        
        for(int i=1; i<ind; i++){
            int pick = arr[i];
            if(i > 1)
                pick += prev2;

            int not_pick = 0 + prev;

            int curri = max(pick, not_pick);
            prev2 = prev;
            prev = curri;
        }
        return prev;
    }

    int houseRobber(int n, vector<int> &arr){
        vector<int> temp1, temp2;

        if(n == 1) return arr[0];

        for(int i=0; i<n; i++){
            if(i != 0) temp1.push_back(arr[i]);
            if(i != n-1) temp2.push_back(arr[i]);
        }

        int ans1 = func(temp1);
        int ans2 = func(temp2);
        
        return max(ans1, ans2);
    }
};

int main(){

    vector<int> arr = {2, 1, 4, 9};
    int n = arr.size();

    Solution obj;
    // int res = obj.func(n, arr);
    int res = obj.houseRobber(n, arr);
    cout << res << endl;

    return 0;
}