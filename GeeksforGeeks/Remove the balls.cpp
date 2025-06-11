class Solution 
{
    public:
    int findLength(vector<int> &color, vector<int> &radius) 
    {
        stack <int> ans;
        int x;
        for(int i = 0; i < color.size(); i++)
        {
            if(ans.empty()) ans.push(i);
            else
            {
                x = ans.top();
                if(color[i] == color[x] && radius[i] == radius[x])
                {
                    ans.pop();
                }
                else ans.push(i);
            }
        }
        return ans.size();
    }
};