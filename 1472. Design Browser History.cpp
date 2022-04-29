#include <bits/stdc++.h>

using namespace std;

class BrowserHistory {
public:
    string stack[5005];
    int p, t;	// current pointer, stack's top
    
    BrowserHistory(string homepage) {
        stack[p = t = 0] = homepage;
    }
    
    void visit(string url) {
        stack[t = ++p] = url;
    }
    
    string back(int steps) {
        return stack[p = max(0, p-steps)];
    }
    
    string forward(int steps) {
        return stack[p = min(t, p+steps)];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */

/*int main()
{
    int n = 3;

    Solution sol;
    vector<vector<int>> res = sol.generateMatrix(n);
    for(int i=0; i<res.size(); i++){
        for(int j=0; j<res[0].size(); j++){
            cout << res[i][j] << " ";
        }
        cout<<endl;
    }
    
    cout<<endl;
    return 0;
}*/