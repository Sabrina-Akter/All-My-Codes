//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int findMaxSum(int n, int m, vector<vector<int>> mat) 
    {
        int mx = -1;
        for(int i = 0; i < mat.size(); i++)
        {
            for(int j = 0; j < mat[0].size(); j++)
            {
                int X[6] = {+1, +1, +1, -1, -1, -1};
                int Y[6] = {-1, +0, +1, -1, +0, +1};
                int sum = mat[i][j];
                int cnt = 0;
                for(int k = 0; k < 6; k++)
                {
                    if(i + X[k] < mat.size() && i + X[k] >=0 && j + Y[k] < mat[0].size() && j + Y[k] >= 0)
                    {
                        sum += mat[i + X[k]][j + Y[k]];
                        cnt++;
                    }
                }
                if(cnt == 6)
                {
                    mx = max(mx, sum);
                }
            }
        }
        return mx;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, i, j;
        cin >> N >> M;
        vector<vector<int>> Mat(N, vector<int>(M));
        for (i = 0; i < N; i++)
            for (j = 0; j < M; j++) cin >> Mat[i][j];
        Solution ob;
        cout << ob.findMaxSum(N, M, Mat) << "\n";
    }
}
// } Driver Code Ends