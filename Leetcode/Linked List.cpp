#include <bits/stdc++.h>
using namespace std;

struct ListNode 
{
    int val;
    ListNode *next;
};

int main()
{
    //initializing lists:
    struct ListNode* head = NULL;
    struct ListNode* second = NULL;
    struct ListNode* third = NULL;

    //size
    head = (struct ListNode*)malloc(sizeof(struct ListNode));
    second = (struct ListNode*)malloc(sizeof(struct ListNode));
    third = (struct ListNode*)malloc(sizeof(struct ListNode));

    //inserting values
    head->val = 1;
    head->next = second;

    second->val = 2;
    second->next = third;

    third->val = 3;
    third->next = NULL;

    //print the linked list
    ListNode *ptr = head;
    while(ptr != NULL)
    {
        cout << ptr->val << endl;
        ptr = ptr->next;
    }


    return 0;
}