#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>st;
        int j = 0;
        for(auto i : pushed){
            st.push(i);
            while(!st.empty() && st.top() == popped[j]){
                st.pop();
                j++;
            }
        }
        return st.empty();
    }
};

int main()
{
    vector<int> pushed = {1,2,3,4,5}; 
    vector<int> popped = {4,3,5,1,2};
    Solution sol;
    bool n=sol.validateStackSequences(pushed, popped);
    cout<<n<<" ";
    
    cout<<endl;
    return 0;
}