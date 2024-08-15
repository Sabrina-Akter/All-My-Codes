//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data % 10;
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends
// User function template for C++

/*

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

class Solution 
{
  public:
    Node* addOne(Node* head) 
    {
        string s;
        int num;
        while(head)
        {
           num = head->data;
           s += (num + '0');
           head = head->next;
        }
        vector <int> v;
        int carry = 1, sum;
        for(int i = s.size() - 1; i >= 0; i--)
        {
            num = s[i] - '0';
            sum = num + carry;
            if(i == 0)
            {
                if(sum <= 9) v.push_back(sum);
                else 
                {
                    v.push_back(sum % 10);
                    v.push_back(1);
                }
            }
            else
            {
                if(sum <= 9)
                {
                    v.push_back(sum);
                    carry = 0;
                }
                else
                {
                    v.push_back(sum % 10);
                    carry = 1;
                }
            }
        }
        reverse(v.begin(), v.end());
        Node *ans = new Node(v[0]);
        Node *copy = ans;
        for(int i = 1; i < v.size(); i++)
        {
            ans->next = new Node(v[i]);
            ans = ans->next;
        }
        return copy;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }

        int data = arr[0];
        struct Node* head = new Node(data);
        struct Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends