#include <bits/stdc++.h>

using namespace std;

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        map<Node* , Node*>m;
        Node* curr = head;
        while(curr != NULL){
            Node* tmp = new Node(curr->val);
            m[curr] = tmp;
            curr = curr->next;
        }
        curr = head;
        while(curr != NULL){
            m[tmp]->next = m[curr->next];
            m[tmp]->random = m[curr->random];
            curr = curr->next;
        }
        return m[head];
    }
};