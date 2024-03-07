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
    ListNode* middleNode(ListNode* head) 
    {
        ListNode *dummy = new ListNode(0, head);
        auto *slow = dummy;
        auto *fast = dummy;
 
        while(fast->next && fast->next->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow->next;
    }
};

int main()
{
    

    return 0;
}