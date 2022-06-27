#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void printS(int idx, vector<int>& ds, int s, int sum, int arr[], int n){
        if(idx == n){
            if(s == sum){
                for(auto it : ds)
                    cout << it << " ";
                cout << endl;
            }
            return;
        }
        ds.push_back(arr[idx]);
        s += arr[idx];
        printS(idx+1, ds, s, sum, arr, n);

        ds.pop_back();
        s -= arr[idx];
        printS(idx+1, ds, s, sum, arr, n);
    }
};

int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    // #endif
    
    int arr[] = { 1, 2, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 2;
    vector<int> ds;
    
    Solution sol;
    sol.printS(0, ds, 0, sum, arr, n);
    // cout << res << " ";
    
    cout<<endl;
    return 0;
}