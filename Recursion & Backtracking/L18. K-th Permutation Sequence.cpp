#include <bits/stdc++.h>

using namespace std;

/*
    TC: O(N) * O(N) = O(N^2) : We are placing N numbers in N positions. This will take O(N) time. For every number, we are reducing the search space by removing the element already placed in the previous step. This takes another O(N) time.
    SC: O(N) : We are storing  the numbers in a data structure(here vector)
*/
                            
class Solution {
public:
    string getPermutation(int n, int k){
        int fact = 1;
        vector<int> numbers;
        for(int i=1; i<n; i++){
            fact = fact * i;
            numbers.push_back(i);
        }
        numbers.push_back(n);
        string res = "";
        k = k - 1;
        while(true){
            res = res + to_string(numbers[k / fact]);
            numbers.erase(numbers.begin() + k / fact);
            if(numbers.size() == 0)
                break;
            
            k = k % fact;
            fact = fact / numbers.size();
        }
        return res;
    }
};

int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    // #endif
    int n = 3, k = 3;
        
    Solution sol;
    string ans = sol.getPermutation(n, k);
    cout << ans << endl;
            
    cout<<endl;
    return 0;
}