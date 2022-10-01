#include <bits/stdc++.h>

using namespace std;

/*
    TC: ~O((2^n)*n)
    SC: O(n)
*/

class Solution {
public:
    void printF(int idx, vector<int>& ds, int arr[], int n){
        if(idx == n){
            for(auto it : ds){
                cout << it << " ";
            }
            if(ds.size() == 0)
                cout << "{}";
            cout << endl;
            return;
        }
        ds.push_back(arr[idx]);
        printF(idx+1, ds, arr, n);  // pick 1st element in the array
        ds.pop_back();
        printF(idx+1, ds, arr, n);  // not pick 1st element in the array
    }
};

int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    
    int arr[] = {3, 1, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> ds;
    
    Solution sol;
    sol.printF(0, ds, arr, n);
    // cout << res << " ";
    
    cout<<endl;
    return 0;
}