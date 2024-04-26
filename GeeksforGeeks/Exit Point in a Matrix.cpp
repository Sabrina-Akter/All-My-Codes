//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution 
{
  public:
    vector<int> FindExitPoint(int n, int m, vector<vector<int>>& matrix) 
    {
        int i = 0, j = 0, k = 0;
        int X[4] = {+0, +1, +0, -1};
        int Y[4] = {+1, +0, -1, +0};
        int ans_x = 0, ans_y = 0;
        while(1)
        {
            if(i >= matrix.size() || i < 0 || j >= matrix[0].size() || j < 0)
            {
                break;
            }
            if(matrix[i][j] == 1)
            {
                matrix[i][j] = 0;
                k++;
                if(k == 4) k = 0;
            }
            ans_x = i;
            ans_y = j;
            i += X[k];
            j += Y[k];
        }
        vector <int> ans = {ans_x, ans_y};
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
        vector<int> ans = obj.FindExitPoint(n, m, matrix);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends