#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};


//TC = O(n)
//SC = O(1)

class Solution {
public:
    Node* connect(Node* root) {
        if (!root) return root;

        auto *cur = root;
        auto *nxt = root->left;

        while (nxt) 
        {
            cur->left->next = cur->right;
            if (cur->next) 
            {
                cur->right->next = cur->next->left;
                cur = cur->next;
            } 
            else 
            {
                cur = nxt;
                nxt = cur->left;
            }
        }
        return root;        
    }
};

int main()
{
    

    return 0;
}