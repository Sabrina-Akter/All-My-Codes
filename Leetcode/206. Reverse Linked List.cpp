#include <bits/stdc++.h>
using namespace std;

struct ListNode 
{
    int val;
    ListNode *next;
};

ListNode* reverseList(ListNode* head) {
    vector <int> v;
    //print the linked list
    ListNode *ptr = head;
    while(ptr != NULL)
    {
        v.push_back(ptr->val);
        ptr = ptr->next;
    } 
    reverse(v.begin(), v.end());
    int i=0;
    ptr = head;
    while(ptr != NULL)
    {
        ptr->val = v[i];
        cout << ptr->val << endl;
        ptr = ptr->next;
        i++;
    }
    return head;
    }

int main()
{
    //initializing lists:
    struct ListNode* head = NULL;
    struct ListNode* second = NULL;
    struct ListNode* third = NULL;
    struct ListNode* fourth = NULL;
    struct ListNode* fifth = NULL;

    //size
    head = (struct ListNode*)malloc(sizeof(struct ListNode));
    second = (struct ListNode*)malloc(sizeof(struct ListNode));
    third = (struct ListNode*)malloc(sizeof(struct ListNode));
    fourth = (struct ListNode*)malloc(sizeof(struct ListNode));
    fifth = (struct ListNode*)malloc(sizeof(struct ListNode));

    //inserting values
    head->val = 1;
    head->next = second;

    second->val = 2;
    second->next = third;

    third->val = 3;
    third->next = fourth;

    fourth->val = 4;
    fourth->next = fifth;

    fifth->val = 5;
    fifth->next = NULL;

    reverseList(head);

    return 0;
}