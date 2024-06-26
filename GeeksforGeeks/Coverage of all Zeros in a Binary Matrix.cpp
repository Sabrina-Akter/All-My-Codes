//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int X[4] = {-1, +1, +0, +0};
    int Y[4] = {+0, +0, -1, +1};
    int findCoverage(vector<vector<int>>& matrix) 
    {
        int row = matrix.size();
        int col = matrix[0].size();
        int ans = 0;
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(matrix[i][j] == 0)
                {
                    for(int k = 0; k < 4; k++)
                    {
                        if(i + X[k] < row && i + X[k] >= 0 && j + Y[k] < col && j + Y[k] >= 0 && matrix[i + X[k]][j + Y[k]] == 1)
                        {
                            ans++;
                        }
                    }
                }
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> matrix[i][j];
        Solution obj;
        int ans = obj.findCoverage(matrix);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends