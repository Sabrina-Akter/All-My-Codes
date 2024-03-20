#include <bits/stdc++.h>
using namespace std;

struct ListNode 
{
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution 
{
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) 
    {
        ListNode *dummy = new ListNode(0, list1);
        auto copy = dummy;
        ListNode *first = new ListNode();
        ListNode *first_copy = new ListNode();
        ListNode *second = new ListNode();
        ListNode *second_copy = new ListNode();

        int i = -1;
        while(dummy != NULL)
        {
            if(i == a - 1)
            {
                first = dummy;
                first_copy = dummy->next;
            }
            else if(i == b)
            {
                second = dummy;
                second_copy = dummy;
            }
            i++;
            dummy = dummy->next;     
        }
        first->next = list2;
        dummy = list2;
        while(1)
        {
            dummy = dummy->next;
            if(dummy->next == NULL)
            {
                dummy->next = second->next;
                break;
            }
        }
        dummy = first_copy;
        bool done = false;
        while(done == false)
        {
            auto temp = dummy;
            if(temp == second_copy)
            {
                done = true;
            }
            dummy = dummy->next;
            delete(temp);   
        }
        return copy->next;    
    }
};

int main()
{
    

    return 0;
}