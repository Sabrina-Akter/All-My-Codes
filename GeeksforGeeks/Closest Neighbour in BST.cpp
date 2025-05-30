/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
}; */

class Solution 
{
    public:
    void f(Node* root, int k, int &ans)
    {
       if(root == NULL) return;
       else
       {
           if(root->data <= k && root->data > ans) ans = root->data;
           f(root->left, k, ans);
           f(root->right, k, ans);
       }
    }
    
    int findMaxFork(Node* root, int k) 
    {
       int ans = -1;
       f(root, k, ans);
       return ans;
    }
};
