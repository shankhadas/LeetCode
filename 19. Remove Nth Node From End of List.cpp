//
// Created by das on 3/3/24.
//
#include <bits/stdc++.h>

using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast = head;
        ListNode* slow = head;

        for(int i=0; i<n; i++){
            fast = fast->next;
        }

        if(!fast){
            return head->next;
        }

        while(fast->next){
            fast = fast->next;
            slow = slow->next;
        }

        slow->next = slow->next->next;

        return head;
    }
};
/*
int main()
{
    vector<int> nums = {-4,-1,0,3,10};

    Solution sol;
    vector<int> res=sol.sortedSquares(nums);

    for(auto a : res){
        cout << a <<" ";
    }

    cout<<endl;
    return 0;
}
*/