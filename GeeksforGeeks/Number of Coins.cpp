//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:

    int mn = INT_MAX;

    void f(int ind, int amount, int coins[], int M, int cnt)
    {
        if(ind==M)
        {
            if(amount == 0)
            {
                mn = min(mn, cnt);
            }
        }
        else
        {
            if(cnt+1<mn && amount-coins[ind]>=0)
            {
                f(ind, amount-coins[ind], coins, M, cnt+1);
            } 
            f(ind+1, amount, coins, M, cnt); 
        }
    }

	int minCoins(int coins[], int M, int V) 
	{ 
	    sort(coins, coins+M);
        f(0, V, coins, M, 0);
        if(mn==INT_MAX)
        {
            mn = -1;
        }
        return mn;
	} 	  
};

//{ Driver Code Starts.
int main() 
{   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;
        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];  
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";     
    }
    return 0;
}

// } Driver Code Ends