#include <bits/stdc++.h>
using namespace std;

bool f(TreeNode* &root, vector <long long> &sum, int level)
{
    if(root == NULL) return true;
    else
    {
        if(level > sum.size()) sum.push_back(root->val);
        else sum[level - 1] += root->val;
        f(root->left, sum, level + 1);
        f(root->right, sum, level + 1);
    }
    return true;
}
long long kthLargestLevelSum(TreeNode* root, int k) 
{
    vector <long long> sum;
    f(root, sum, 1);
    sort(sum.rbegin(), sum.rend());
    if(k > sum.size()) return -1;
    else return sum[k - 1];
}

int main()
{
    

    return 0;
}