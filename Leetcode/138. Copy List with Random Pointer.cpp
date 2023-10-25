#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

//TC = O(n)
//SC = O(1)
class Solution {
public:
    Node* copyRandomList(Node* head) {
        auto *iteration = head; 
        auto *front = head;

        while (iteration != NULL) 
        {
            front = iteration->next;

            auto *copy = new Node(iteration->val);
            iteration->next = copy;
            copy->next = front;

            iteration = front;
        }

        iteration = head;
        while (iteration != NULL) 
        {
            if (iteration->random != NULL) iteration->next->random = iteration->random->next;
            iteration = iteration->next->next;
        }

        iteration = head;
        auto *returnHead = new Node(0);
        auto *copy = returnHead;

        while (iteration != NULL) {
            front = iteration->next->next;
            copy->next = iteration->next;
            iteration->next = front;         
            copy = copy -> next; 
            iteration = front;
        }
        return returnHead->next;              
    }
};

int main()
{
    

    return 0;
}