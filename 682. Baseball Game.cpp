#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> record;
        for (string ch : ops) {
            if (ch == "C")
                record.pop_back();
            else if (ch == "D")
                record.push_back(record.back() * 2);
            else if (ch == "+")
                record.push_back(record.back() + record[record.size() - 2]);
            else
                record.push_back(stoi(ch));
        }
        
        return accumulate(record.begin(), record.end(), 0);
    }
};

int main()
{
    vector<string> ops = {"5","2","C","D","+"};
    
    Solution sol;
    int n=sol.calPoints(ops);
    cout << n << " ";
    
    cout<<endl;
    return 0;
}