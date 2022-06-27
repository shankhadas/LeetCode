#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int printS(int idx, int s, int sum, int arr[], int n){
        if(idx == n){
            if(s == sum)
                return 1;
            return 0;
        }
        s += arr[idx];
        int l = printS(idx+1, s, sum, arr, n);

        s -= arr[idx];
        int r = printS(idx+1, s, sum, arr, n);

        return l + r;
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
    
    Solution sol;
    int res = sol.printS(0, 0, sum, arr, n);
    cout << res << " ";
    
    cout<<endl;
    return 0;
}