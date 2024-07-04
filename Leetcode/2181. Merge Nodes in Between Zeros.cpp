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
    ListNode* mergeNodes(ListNode* head) 
    {
        ListNode *ans = new ListNode(0);
        auto *copy = ans;
        long long sum = 0;
        while(head)
        {
            sum += head->val;
            if(head->val == 0)
            {
                ans->next = new ListNode(sum);
                ans = ans->next;
                sum = 0;
            }
            head = head->next;
        }
        return copy->next->next;
    }
};

int main()
{
    

    return 0;
}