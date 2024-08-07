//{ Driver Code Starts
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/*structure of a node of the linked list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/
// Function should return 0 is length is even else return 1
class Solution 
{
  public:
    int isLengthEvenOrOdd(struct Node* head) 
    {
        int cnt = 0;
        while(head)
        {
            cnt++;
            head = head -> next;
        }
        return cnt % 2 == 0 ? 0 : 1;
    }
};

//{ Driver Code Starts.

// Driver function
int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n, tmp, first, i, l;
        struct Node *head = NULL, *tail = NULL;
        cin >> n;
        cin >> first;
        head = new Node(first);
        tail = head;

        for (i = 0; i < n - 1; i++) {
            cin >> l;
            tail->next = new Node(l);
            tail = tail->next;
        }
        Solution s;
        if (s.isLengthEvenOrOdd(head) == 0)
            cout << "Even\n";
        else
            cout << "Odd\n";
    }
    return 0;
}

// } Driver Code Ends