//
// Created by das on 27/3/24.
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
    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;

        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    ListNode* middle(ListNode* head){
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }

    void reorderList(ListNode* head) {
        ListNode* fst = head;
        ListNode* mid = middle(head);
        ListNode* snd = reverse(mid->next);

        mid->next = NULL;

        while(snd != NULL){
            ListNode* f1 = fst->next;
            ListNode* f2 = snd->next;

            fst->next = snd;
            snd->next = f1;
            fst=f1;
            snd=f2;
        }
    }
};
/*
int main() {
    vector<char> tasks = {'A','A','A','B','B','B'};
    int n = 2;

    Solution sol;
    int res=sol.leastInterval(tasks, n);

    cout << res <<" ";

    cout<<endl;
    return 0;
}
*/