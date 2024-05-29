#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

Node *removeDuplicates(Node *head)
{
    Node *ans = new Node(0);
    auto *copy = ans;
    int last = -1;

    while(head)
    {
        if(last != head->data)
        {
            ans->next = new Node(head->data);
            last = head->data;
            ans = ans->next;
        }
        head = head->next;
    }
    return copy->next;
}

int main()
{
    

    return 0;
}