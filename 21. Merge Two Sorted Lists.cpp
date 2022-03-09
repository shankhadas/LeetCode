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

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode* l3=NULL;

        ListNode* head=NULL;

        if(list1 == NULL || list2 == NULL)

            return list1 != NULL ? list1 : list2;

        if(list2->val < list1->val){

            l3=list2;

            head=l3;

            list2=list2->next;

            l3->next=NULL;

        } else{

            l3=list1;

            head=l3;

            list1=list1->next;

            l3->next=NULL;

        }

        while(list1!=NULL && list2!=NULL)

        {

            if(list2->val < list1->val)

            {

                l3->next=list2;

                l3=l3->next;

                list2=list2->next;

                l3->next=NULL;

            }

            else

            {

                l3->next=list1;

                l3=l3->next;

                list1=list1->next;

                l3->next=NULL;

            }

        }

        while(list1!=NULL)

        {

            l3->next=list1;

            l3=l3->next;

            list1=list1->next;

            l3->next=NULL;

        }

        while(list2!=NULL)

        {

            l3->next=list2;

            l3=l3->next;

            list2=list2->next;

            l3->next=NULL;

        }

        return head;

    }

};
        