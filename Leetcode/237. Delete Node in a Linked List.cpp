#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

//TC = O(1)
//SC = O(1)
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode *remove_node = node->next;
        node->val = node->next->val;
        node->next = node->next->next;
        delete(remove_node);
    }
};

int main()
{
    

    return 0;
}