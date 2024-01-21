//
// Created by das on 21/1/24.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        long long ans = 0;
        int mod = 1e9+7;
        stack<int> st;

        for(int i = 0;i<=n;i++){
            while(st.size() && (i==n or arr[st.top()]>arr[i])){
                int j = st.top();
                st.pop();
                int k = st.empty() ? -1 : st.top();
                ans += (long long) arr[j]*(i-j)*(j-k);
            }
            st.push(i);
        }
        return (int)(ans%mod);
    }
};

int main() {
    vector<int> arr = {3,1,2,4};

    Solution sol;
    int res=sol.sumSubarrayMins(arr);

    cout << res << endl;

    cout<<endl;
    return 0;
}