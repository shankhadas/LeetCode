#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        //reverse(s.begin(), s.end());
        
        /*
        int l = 0, r = s.size()-1;
        while(l <= r){
            char temp = s[l];
            s[l] = s[r];
            s[r] = temp;
            l++; r--;
        }
        */
        
        /*
        stack<char>st;
        for(int i=0; i<s.size(); i++){
          st.push(s[i]);
        }
        s.clear();
        while(!st.empty()){
            s.push_back(st.top());
            st.pop();
        }
        */
        
        int n = s.size();
        for(int i = 0; i < n / 2; ++i)
            swap(s[i], s[n - 1 - i]);
    }
};

int main()
{
    vector<int> s = {"h","e","l","l","o"};
    
    Solution sol;
    sol.reverseString(s);
    // cout << n << " ";
    
    cout<<endl;
    return 0;
}