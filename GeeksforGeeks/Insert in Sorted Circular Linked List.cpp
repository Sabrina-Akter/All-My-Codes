/* structure for a node
class Node {
 public:
  int data;
  Node *next;

  Node(int x){
      data = x;
      next = NULL;
  }
}; */

class Solution 
{
  public:
    Node* sortedInsert(Node* head, int data) 
    {
        if(data < head->data)
        {
            auto copy_head = head;
            Node *n = new Node(data);
            n->next = head;
            while(head)
            {
                if(head->next == copy_head)
                {
                    head->next = n;
                    return n;
                }
                head = head->next;
            }            
        }
        auto ans = head;
        Node *n = new Node(data);
        while(head)
        {
            if(head->next->data >= data || head->data > head->next->data)
            {
                auto x = head->next;
                head->next = n;
                n->next = x;
                return ans;
            }
            head = head->next;
        }
    }
};