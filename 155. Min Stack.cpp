#include <bits/stdc++.h>

using namespace std;

class MinStack {
public:
    stack<pair<int, int>>s;
    MinStack() {
        
    }
    
    void push(int x) {
        int min = ((!s.empty() && s.top().second < x) ? s.top().second : x); 
        s.push({x, min});
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top().first;
    }
    
    int getMin() {
        return s.top().second;
    }

   /*
    stack<int>s1,s2;
    MinStack() {
        
    }
    
    void push(int x) {
        s1.push(x);
        s2.push((!s2.empty() && s2.top() < x) ? s2.top() : x);
    }
    
    void pop() {
        s1.pop();
        s2.pop();
    }
    
    int top() {
        return s1.top();
    }
    
    int getMin() {
        return s2.top();
    }
    */
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */