//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        vector<vector<int>> box(n, vector<int>(m, 0));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(S1[i] == S2[j]){
                    box[i][j] = 1;
                }
            }
        }
        int maxi = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(box[i][j] == 1){
                    int row = i+1; 
                    int col = j+1;
                    int count = 1;
                    while(row>=0 && row<n && col>=0 && col<m && box[row][col] == 1){
                            row++, col++;
                            count++;
                    }
                    maxi = max(maxi, count);
                    if(maxi == max(n-i, m-j)){
                        return maxi;
                    }
                }
            }
        }
        return maxi;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends