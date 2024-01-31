//
// Created by das on 31/1/24.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int size = temperatures.size();
        vector<int> ans(size, 0);
        stack<int> s;

        for(int i=size-1; i>=0; --i) {
            while(!s.empty() && temperatures[i] >= temperatures[s.top()]) {
                s.pop();
            }
            ans[i] = s.empty() ? 0 : s.top() - i;
            s.push(i);
        }
        return ans;
    }
};

int main() {
    vector<int> temperatures = {73,74,75,71,69,72,76,73};

    Solution sol;
    vector<int> res=sol.dailyTemperatures(temperatures);

    for(auto a : res){
        cout << a << " ";
    }

    cout<<endl;
    return 0;
}