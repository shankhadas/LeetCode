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

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *a=headA, *b=headB;
        int count1=0, count2=0;
		
		//counting lengths of both the linked list
        for(ListNode *curr=headA;curr!=NULL; curr=curr->next) count1++;
        for(ListNode *curr=headB;curr!=NULL; curr=curr->next) count2++;
        
		//If linked list 1 is longer, we traverse it, till it becomes equal to length of second...
        while(count1>count2) {
            count1--;
            a=a->next;
        }
        
		//If second one is longer, we traverse it, till it becomes equal to length of first...
        while(count2>count1) {
            count2--;
            b=b->next;
        }
        
		//Since length of both is now equal, we traverse them together, and break if the nodes become equal...
        while(a!=b) {
            a=a->next;
            b=b->next;
        }
        
        return a;
}
 
int main()
{
    vector<int> listA = {4,1,8,4,5};
    ListNode* headA = constructList(listA);
    printList(headA);
    cout<<endl;

    vector<int> listB = {5,6,1,8,4,5};
    ListNode* headB = constructList(listB);
    printList(headB);
    cout<<endl;

    ListNode* res = getIntersectionNode(headA, headB);
    cout<<res<<" ";

    cout<<endl;
 
    return 0;
}
