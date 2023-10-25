#include <bits/stdc++.h>
using namespace std;

//TC = O(n)
//SC = O(1)
class Solution {
public:
    struct ListNode {
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
    };
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
};

int main()
{
    

    return 0;
}