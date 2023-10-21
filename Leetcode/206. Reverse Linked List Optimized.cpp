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
        ListNode *dummy = nullptr;
        while(head!=nullptr)
        {
            ListNode *next = head->next;
            head->next = dummy;
            dummy = head;
            head = next;
        }
        return dummy;
    }
};

int main()
{
    

    return 0;
}