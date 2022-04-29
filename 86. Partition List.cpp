#include <bits/stdc++.h>

using namespace std;

class ListNode
{
  public:
    int val;        // data field
    ListNode* next;     // pointer to the next node
};
 
/*
    Takes a list and a data value, creates a new link with the given data
    and pushes it onto the list's front.
*/
ListNode* push(ListNode* head, int val){
    ListNode* node = new ListNode;          // allocate a new node in a heap and set its data
    node->val = val;
    node->next = head;              // set the `.next` pointer of the new node to point to the current first node of the list.             
    return node;                    // return the new node, so it becomes the first node in the list
}

ListNode* constructList(vector<int> const &keys){        // Function for linked list implementation from a given set of keys
    ListNode* head = nullptr;
    for (int i = keys.size() - 1; i >= 0; i--){      // start from the end of the array
        head = push(head, keys[i]);                  // update head here
    }
    return head;
}

void printList(ListNode* head){                 // Helper function to print a linked list
    ListNode* ptr = head;
    while (ptr){
        cout << ptr->val << " -> ";
        ptr = ptr->next;
    }
    cout << "nullptr" << endl;
}

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
    ListNode* partition(ListNode* head, int x) {
        ListNode *l1 = new ListNode(), *l2 = new ListNode();
        ListNode *p1=l1,*p2=l2,*p=head;
        while(p!=NULL){
            if((p->val)<x) 
                p1 = p1->next = p;
            else 
                p2 = p2->next = p;
            p = p->next;
        }
        p2->next = NULL;
        p1->next = l2->next;
        return l1->next;
    }
};
 
int main()
{
    vector<int> keys = { 1,4,3,2,5,2 };
    int x = 3;
    ListNode* head = constructList(keys);
    printList(head);

    Solution sol;
    ListNode* node = sol.partition(head, x);
    // cout<<node->val<<" ";
    printList(node);
    cout<<endl;
 
    return 0;
}
