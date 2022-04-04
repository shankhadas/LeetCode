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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* fast = head;
        ListNode* slow = head;
        
        ListNode* first = NULL;
        ListNode* second = NULL;
        for(int i=0; i<k-1; i++){
            fast = fast->next;
        }
        first = fast;
        while(fast->next != NULL){
            fast = fast->next;
            slow = slow->next;
        }
        second = slow;
        int temp = first->val;
        first->val = second->val;
        second->val = temp;
        return head;
    }
};