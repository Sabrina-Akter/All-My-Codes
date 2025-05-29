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
    int mx = 0;
    void f(int sum, Node *root, int path, int &ans)
    {
        if(root == NULL) return;
        else if(root->left == NULL && root->right == NULL)
        {
            if(path == mx) ans = max(ans, sum + root->data);
            else if(path > mx)
            {
                ans = sum + root->data;
                mx = path;                
            }
            return;
        }
        else
        {
            f(sum + root->data, root->left, path + 1, ans);
            f(sum + root->data, root->right, path + 1, ans);
        }
        return;
    }
    int sumOfLongRootToLeafPath(Node *root) 
    {
        int ans = 0;
        f(0, root, 0, ans);
        return ans;
    }
};