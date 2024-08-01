//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution 
{
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &matrix) 
    {
        bool right = true, down = false, left = false, up = false;
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> vec(n, vector<int>(m, 0));
        vector<int> ans;
        int i = 0, j = -1;
        int sum = n * m * 10;
        while(sum--)
        {
           if(right == true)
           {
               if(j + 1 < m && vec[i][j + 1] == 0)
               {
                   ans.push_back(matrix[i][j + 1]);
                   vec[i][j + 1] = 1;
                   j++;
               }
               else
               {
                   right = false;
                   down = true;
               }
           }
           if(down == true)
           {
               if(i + 1 < n && vec[i + 1][j] == 0)
               {
                   ans.push_back(matrix[i + 1][j]);
                   vec[i + 1][j] = 1;
                   i++;
               }
               else
               {
                   down = false;
                   left = true;
               }
           }
           if(left == true)
           {
               if(j - 1 >= 0 && vec[i][j - 1] == 0)
               {
                   ans.push_back(matrix[i][j - 1]);
                   vec[i][j - 1] = 1;
                   j--;
               }
               else
               {
                   left = false;
                   up = true;
               }
           }
           if(up == true)
           {
               if(i - 1 >= 0 && vec[i - 1][j] == 0)
               {
                   ans.push_back(matrix[i - 1][j]);
                   vec[i - 1][j] = 1;
                   i--;
               }
               else
               {
                   up = false;
                   right = true;
               }
           }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r, vector<int>(c, 0));

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends