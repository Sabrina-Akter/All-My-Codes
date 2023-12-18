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

//TC - O(n); n = number of nodes (as we are traversing all the nodes of the tree)
//SC - O(h); h = height of the tree (for the recursive stack)
class Solution 
{
public:
    int maxDepth(TreeNode* root) 
    {
        if(root == NULL) return 0;
        return 1 + max(maxDepth(root -> left), maxDepth(root -> right));
    }
};

int main()
{
    

    return 0;
}