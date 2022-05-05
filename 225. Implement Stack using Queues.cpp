#include <bits/stdc++.h>

using namespace std;

class MyStack {
public:
    queue<int> q;
    int peek = -1;
    MyStack() {
        
    }
    
    void push(int x) {
        peek = x;
        q.push(x);
    }
    
    int pop() {
        int size = q.size();
        size -= 1;
        while(size--){
            peek = q.front();
            q.push(peek);
            q.pop();
        }
        int res = q.front();
        q.pop();
        return res;
    }
    
    int top() {
        return peek;
    }
    
    bool empty() {
        return q.size() == 0;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
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