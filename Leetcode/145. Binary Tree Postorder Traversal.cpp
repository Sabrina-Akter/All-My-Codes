class Solution 
{
public:
    bool f(TreeNode *root, vector <int> &ans)
    {
        if(root == NULL) return true;
        else
        {            
            f(root->left, ans);
            f(root->right, ans);
            ans.push_back(root->val);
        }
        return true;
    }
    vector<int> postorderTraversal(TreeNode* root) 
    {
        vector <int> ans;
        f(root, ans);
        return ans;
    }
};