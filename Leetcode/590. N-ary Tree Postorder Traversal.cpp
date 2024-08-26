class Solution 
{
public:
    bool f(Node *root, vector <int> &ans)
    {
        if(root == NULL) return true;
        else
        {
            for(Node *child : root->children)
            {
                f(child, ans);
                ans.push_back(child->val);
            }
        }
        return true;
    }
    vector<int> postorder(Node* root) 
    {
        vector <int> ans;
        if(root == NULL) return ans;
        int first = root->val;
        f(root, ans);
        ans.push_back(first);
        return ans;
    }
};