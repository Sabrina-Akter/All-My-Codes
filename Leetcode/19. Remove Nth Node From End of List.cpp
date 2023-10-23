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
        ListNode *dummy = new ListNode(0, head);
        ListNode *first_ptr = dummy;
        ListNode *second_ptr = dummy;
        int jump = n+1;
        while(jump--)
        {
            second_ptr = second_ptr->next;
        }
        while(second_ptr!=nullptr)
        {
            first_ptr = first_ptr->next;
            second_ptr = second_ptr->next;
        }
        //Preservations
        ListNode *delete_candidate = first_ptr->next;
        ListNode *next_connection = delete_candidate->next;
        //Connection
        first_ptr->next = next_connection;
        //Deleting from memory
        delete(delete_candidate);
        //Return
        return dummy->next;
    }
};

int main()
{
    

    return 0;
}