#include <bits/stdc++.h>

using namespace std;

class MedianFinder {
public:
    priority_queue<int> max_heap;                             // stores the smaller half
    priority_queue<int, vector<int>, greater<int>> min_heap; // stores the larger half

    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(max_heap.empty() || num <= max_heap.top())
            max_heap.push(num);
        else
            min_heap.push(num);
        
        // if no of element is odd, then max_heap can have one extra element then min_heap // max_heap <= 1+min_heap
        // So, if difference between the size of max_heap and min_heap gets more than one then balancing is required
        if(max_heap.size() - min_heap.size() == 2){
            min_heap.push(max_heap.top());
            max_heap.pop();
        }

        // if no of element is even, then min_heap can have less or equal element then max_heap // min_heap <= max_heap
        // So, if size of min_heap gets more than max_heap size then balancing is required
        else if(min_heap.size() - max_heap.size() == 1){
            max_heap.push(min_heap.top());
            min_heap.pop();
        }
    }
    
    double findMedian() {
        // if both heaps have equal elements the of of elements is even // so median is the average of top of min and max heap.
        if(max_heap.size() == min_heap.size())
            return ((double)(max_heap.top()+min_heap.top())/2);
        else                                                      // odd no of elements
            return (double)max_heap.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */

/*
int main()
{
    vector<int> nums = {0,1,0,3,2,3};

    Solution sol;
    int res=sol.lengthOfLIS(nums);
    
    cout << res << "";
    
    cout<<endl;
    return 0;
}
*/