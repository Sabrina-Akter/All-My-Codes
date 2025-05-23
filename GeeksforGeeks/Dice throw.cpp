class Solution 
{
    public:
    int f(int sum, int cur, int m, int n, int x, vector<vector<int>>& mem)
    {
        if(cur == n) return (sum == x) ? 1 : 0;
            
        if(mem[cur][sum] != -1) return mem[cur][sum];
            
        int ways = 0;
        for (int i = 1; i <= m; i++)
        {
            if(sum + i <= x) ways += f(sum + i, cur + 1, m, n, x, mem); 
        }
        mem[cur][sum] = ways;
        return ways;
    }
    int noOfWays(int m, int n, int x) 
    {
        vector<vector<int>> mem(n + 1, vector<int>(x + 1, -1));
        return f(0, 0, m, n, x, mem);
    }
};
