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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        // Create a dummy node to handle cases where the removal starts from the head of list1
        ListNode* dummy = new ListNode(0);

        dummy->next = list1;

        // Traverse to the (a-1)th node
        ListNode* current = dummy;

        for (int i = 0; i < a; ++i) {
            current = current->next;
        }

        // Save the reference to the (a-1)th node
        ListNode* beforeA = current;

        // Traverse to the bth node
        for (int i = a; i <= b; ++i) {
            current = current->next;
        }

        // Save the reference to the (b+1)th node
        ListNode* afterB = current->next;

        // Connect the (a-1)th node to list2
        beforeA->next = list2;

        // Traverse to the end of list2
        while (list2->next) {
            list2 = list2->next;
        }

        // Connect the end of list2 to the (b+1)th node
        list2->next = afterB;

        return dummy->next;
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