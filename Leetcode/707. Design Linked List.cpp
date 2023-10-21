#include <bits/stdc++.h>
using namespace std;

//TC = O(n)
//SC = O(n)
class MyLinkedList {
public:
    class node{
    public:
        const static int dummy = 0;
        int val;
        node *next;
        node(int _val = dummy)
        {
            val = _val;
            next = nullptr;
        }
        node(int _val, node *_next)
        {
            val = _val;
            next = _next;
        }
    };

    int len;
    node *dhead;

    MyLinkedList() {
        len = 0;
        dhead = new node();        
    }
    
    int get(int index) {
        if (index < 0 || index >= len)
        {
            return -1;
        }
        node *chead = dhead->next;
        while(index--)
        {
            chead = chead->next;
        }
        return chead -> val;        
    }
    
    void addAtHead(int val) {
        addAtIndex(0, val);        
    }
    
    void addAtTail(int val) {
        addAtIndex(len, val);        
    }
    
    void addAtIndex(int index, int val) {
        if(index>len)
        {
            return;
        }
        node *chead = dhead;
        while(index--)
        {
            chead = chead->next;
        }
        node *new_block = new node(val);
        node *next_block = chead->next;

        chead->next = new_block;
        new_block->next = next_block;
        len++;        
    }
    
    void deleteAtIndex(int index) {
        if(index<0 || index>=len)
        {
            return;
        }
        node *chead = dhead;
        while(index--)
        {
            chead = chead->next;
        }
        node *delete_candidate = chead->next;
        chead->next = chead->next->next;
        delete(delete_candidate);
        len--;        
    }
};

int main()
{
    

    return 0;
}