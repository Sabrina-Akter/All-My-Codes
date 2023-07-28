//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    map <pair<long, long>, long long> dp;
    long long f(int coins[], int N, int target, int sum, int index)
    {
        if(dp.find({sum, index})!=dp.end())
        {
            return dp[{sum, index}];
        }
        if(sum==target)
        {
            return 1;
        }
        else
        {
            long long i, ways=0;
            for(i=index;i<N;i++)
            {
                if(sum+coins[i]<=target)
                {
                    ways+=f(coins, N, target, sum+coins[i], i);
                }
            }
            return dp[{sum, index}] = ways;
        }
    }

    long long int count(int coins[], int N, int sum) {
        return f(coins, N, sum, 0, 0);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends