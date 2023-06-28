#include <bits/stdc++.h>
using namespace std;

struct ListNode 
{
    int val;
    ListNode *next;
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        struct ListNode* head3 = NULL;
        head3 = (struct ListNode*)malloc(sizeof(struct ListNode));
        while(1)
        {
            
        }
        return list1;
    }

int main()
{
    //initializing lists:
    struct ListNode* head1 = NULL;
    struct ListNode* second1 = NULL;
    struct ListNode* third1 = NULL;

    //size
    head1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    second1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    third1 = (struct ListNode*)malloc(sizeof(struct ListNode));

    //inserting values
    head1->val = 1;
    head1->next = second1;

    second1->val = 2;
    second1->next = third1;

    third1->val = 4;
    third1->next = NULL;

    //-----------------------------------------------------------
    //initializing lists:
    struct ListNode* head2 = NULL;
    struct ListNode* second2 = NULL;
    struct ListNode* third2 = NULL;

    //size
    head2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    second2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    third2 = (struct ListNode*)malloc(sizeof(struct ListNode));

    //inserting values
    head2->val = 1;
    head2->next = second2;

    second2->val = 3;
    second2->next = third2;

    third2->val = 4;
    third2->next = NULL;   

    //print the linked list
    ListNode *ptr1 = head1;
    ListNode *ptr2 = head2;
    while(ptr1 != NULL)
    {
        cout << ptr1->val << endl;
        cout << ptr2->val << endl;
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
        cout << endl;
    }

    mergeTwoLists(head1, head2);

    return 0;
}