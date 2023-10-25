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
    ListNode* reverseList(ListNode* head) {
        ListNode *previous_block = nullptr;
        auto *current_block = head;
        while(current_block!=nullptr)
        {
            auto *next_block = current_block->next;
            current_block->next = previous_block;
            previous_block = current_block;
            current_block = next_block;
        }
        return previous_block;
    }
    int pairSum(ListNode* head) {
        auto slow = head;
        auto fast = head;
        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        auto mid_head = reverseList(slow);
        int max_pair_sum = 0;
        while(mid_head)
        {
            max_pair_sum = max(max_pair_sum, (head->val+mid_head->val));
            head = head->next;
            mid_head = mid_head->next;
        }
        return max_pair_sum;
    }
};

int main()
{
    

    return 0;
}