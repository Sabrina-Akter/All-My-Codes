#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

 //TC = O(n)
 //SC = O(1)
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        auto *dummy = new ListNode(0, head);
        auto *slow = dummy;
        auto *fast = dummy;
        int jump = n+1;
        while(jump--)
        {
            fast = fast->next;
        }
        while(fast!=nullptr)
        {
            slow = slow->next;
            fast = fast->next;
        }
        auto *delete_candidate = slow->next;
        slow->next = slow->next->next;
        delete(delete_candidate);
        return dummy->next;
    }
};

int main()
{
    

    return 0;
}