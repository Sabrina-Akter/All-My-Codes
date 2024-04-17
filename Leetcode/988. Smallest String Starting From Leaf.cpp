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
    bool f(TreeNode* root, string s, vector <string> &all)
    {
        if(root == NULL) return false;
        s += 'a' + root->val;
        f(root->left, s, all);
        s.pop_back();
        s += 'a' + root->val;
        f(root->right, s, all);
        if(root->left == NULL && root->right == NULL)
        {
            string temp = s;
            reverse(temp.begin(), temp.end());
            all.push_back(temp);
            return false;
        }
        return false;
    }

    string smallestFromLeaf(TreeNode* root) 
    {
        vector <string> all;
        f(root, "", all);
        sort(all.begin(), all.end());
        return all[0];
    }
};

int main()
{
    

    return 0;
}