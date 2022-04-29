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
    int count(ListNode *head)
    {
        int count = 0;
        ListNode *temp = head;
        while (temp != NULL)
        {
            temp = temp->next;
            count++;
        }
        return count;
    }
    vector<ListNode *> splitListToParts(ListNode *head, int k)
    {
        int n = count(head);
        vector<ListNode *> ans;
        int x = n / k, y = n % k;
        for (int i = 0; i < k; i++)
        {
            int j = x;
            if (y > 0)
                j++;
            y--;
            ans.push_back(head);
            while (j > 1)
            {
                if (head != NULL)
                    head = head->next;
                j--;
            }
            if (head != NULL)
            {
                ListNode *temp = head;
                head = head->next;
                temp->next = NULL;
            }
        }
        return ans;
    }
};
 
int main()
{
    vector<int> keys = { 1,2,3 };
    int k = 5;
    ListNode* head = constructList(keys);
    printList(head);
    cout<<endl;

    Solution sol;
    vector<ListNode*> node = sol.splitListToParts(head, k);
    // cout<<node->val<<" ";
    for(auto node : node)
        printList(node);
    cout<<endl;
 
    return 0;
}
