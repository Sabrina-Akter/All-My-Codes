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

class Solution {
public:
    bool f(TreeNode* &root, vector <vector<int>> &v, int level)
    {
        if(root == NULL) return true;
        else
        {
            if(level % 2 == 0 && root->val % 2 == 0) return false;
            else if(level % 2 != 0 && root->val % 2 != 0) return false;
            if(level < v.size())
            {
                if(level % 2 == 0)
                {
                    if(v[level].back() >= root->val) return false;
                    else v[level].push_back(root->val);
                }
                else
                {
                    if(v[level].back() <= root->val) return false;
                    else v[level].push_back(root->val);
                }
            }
            else
            {
                vector <int> temp = {root->val};
                v.push_back(temp);
            }
            if(f(root->left, v, level + 1) == false) return false;
            if(f(root->right, v, level + 1) == false) return false;
        }
        return true;
    }
    bool isEvenOddTree(TreeNode* root) 
    {
        vector <vector<int>> v;
        return f(root, v, 0);
    }
};

int main()
{
    

    return 0;
}