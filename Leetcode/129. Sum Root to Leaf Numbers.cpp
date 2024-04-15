#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
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
    bool f(TreeNode* root, vector <int> &nums, int sum)
    {
        if(root == NULL) return false;
        sum = (sum * 10) + root->val;
        if(root->left == NULL && root->right == NULL) nums.push_back(sum);
        f(root->left, nums, sum);
        f(root->right, nums, sum);
        return true;
    }
    int sumNumbers(TreeNode* root) 
    {
        vector <int> nums;
        f(root, nums, 0);
        int sum = 0;
        for(auto &it : nums)
        {
            sum += it;
        }
        return sum;
    }
};

int main()
{
    

    return 0;
}