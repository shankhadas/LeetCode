#include <bits/stdc++.h>

using namespace std;

class ListNode
{
  public:
    int key;        // data field
    ListNode* next;     // pointer to the next node
};
 
/*
    Takes a list and a data value, creates a new link with the given data
    and pushes it onto the list's front.
*/
ListNode* push(ListNode* head, int key){
    ListNode* node = new ListNode;          // allocate a new node in a heap and set its data
    node->key = key;
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
        cout << ptr->key << " -> ";
        ptr = ptr->next;
    }
    cout << "nullptr" << endl;
}
 
int main()
{
    vector<int> keys = { 4, 3, 2, 1 };
    ListNode* head = constructList(keys);
    printList(head);

    cout<<endl;
 
    return 0;
}
