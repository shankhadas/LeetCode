#include <bits/stdc++.h>

using namespace std;

/*
Let's say we have N seperate objects and we want to arrange them in a line, what will be the total number of ways for this? N! right?. Now our problem is almost similar to this one except that here we have N total number of orders and 2N corresponding objects (1 for pickup and 1 for delivery each) and we have to arrange them in a straight line to count the total number of options. So ideally our answer should be 2N! by this logic.

But in the problem, we are given one more condition, that for each order i, delivery(i) is always after pickup(i). Hence this means that for each order, we have to discard exactly half of the total number of options where delivery has been placed before pickup. Hence for total N number of orders, we need to divide our answer by 2^N.

Hence our final answer will be 2N! / (2^N) , where N is the number of orders.
*/

class Solution {
public:
    int countOrders(int n) {
        long long res = 1;
        int mod = 1e9+7;
        // long long mod = pow(10,9)+7;
        for(int i=2; i<=2*n; i++){
            res *= i; // calculating factorial

            if(i % 2 == 0){
                res /= 2;  // simultaneously dividing my ans by 2 everytime i is even (hence total N number of times)
            }
            res = res % mod; // modulo to get rid of overflow error
        }
        return res;
    }
};

int main()
{
    int n = 3;
    
    Solution sol;
    int val=sol.countOrders(n);
    cout<<val<<" ";
    
    cout<<endl;
    return 0;
}