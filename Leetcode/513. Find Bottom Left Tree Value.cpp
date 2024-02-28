#include <bits/stdc++.h>
using namespace std;


struct TreeNode 
{
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution 
{
public:
    void f(TreeNode* &root, int &mx, int &ans, int sum)
    {
        if(root == NULL) return;
        else if(root->left == NULL && root->right == NULL)
        {
            if(sum > mx)
            {
                mx = sum;
                ans = root->val;
            }
        }
        else
        {
            f(root->left, mx, ans, sum + 1);
            f(root->right, mx, ans, sum + 1);
        }
    }
    int findBottomLeftValue(TreeNode* root) 
    {
        int mx = 0;
        int ans;
        f(root, mx, ans, 1);
        return ans;
    }
};

int main()
{
    

    return 0;
}