class Solution 
{
    public:
    int kthSmallest(vector<vector<int>> &matrix, int k) 
    {
        priority_queue<int, vector<int>, greater<int>> pq;
        
        int n = matrix.size(), m = matrix[0].size(), K = k - 1;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                pq.push(matrix[i][j]);
            }
        }
        while(K--)
        {
            pq.pop();
        }
        return pq.top();
    }
};


