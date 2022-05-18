#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string reorganizeString(string s) {
        string ans = "";
        map<char, int>m;
        for(int i=0; i<s.size(); i++){
            m[s[i]]++;
        }
        
        priority_queue<pair<int, char>> pq;

        for(auto i : m){
            pq.push({i.second, i.first});
        }
        while(pq.size() > 1){
            auto str1 = pq.top();
            pq.pop();
            auto str2 = pq.top();
            pq.pop();
            ans += str1.second;
            ans += str2.second;
            if(--str1.first > 0)
                pq.push(str1);
            if(--str2.first > 0)
                pq.push(str2);   
        }
        if(pq.size() == 1){
            if(pq.top().first > 1)
                return "";
            if(pq.top().first == 1)
                return ans += pq.top().second;
        }
    }
};

int main()
{
    string s = "aab";
    
    Solution sol;
    string res =sol.reorganizeString(s);

    cout << res << " ";
    
    cout<<endl;
    return 0;
}