#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

//O(n)
//O(n)
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        auto *dummy_head = new ListNode();
        auto *current = dummy_head;

        int carry = 0;

        while(l1!=nullptr || l2!=nullptr || carry)
        {
            int sum = 0;
            if(l1 != nullptr)
            {
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2 != nullptr)
            {
                sum += l2->val;
                l2 = l2->next;
            }
            sum += carry;
            carry = sum/10;

            auto *new_node = new ListNode(sum%10);

            current->next = new_node;
            current = current->next;
        }
        return dummy_head->next;
    }
};

int main()
{
    

    return 0;
}