//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution 
{
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(int n, int start[], int end[]) 
    {
        vector <pair<int, int>> v(n);
        for(int i = 0; i < n; i++)
        {
            v[i] = {end[i], start[i]};
        }
        sort(v.begin(), v.end());
        int ans = 0, last;
        for(int i = 0; i < n; i++)
        {
            if(i == 0)
            {
               ans++;
               last = v[i].first;
            }
            else
            {
                if(v[i].second > last)
                {
                    ans++;
                    last = v[i].first;
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
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++)
            cin >> start[i];

        for (int i = 0; i < n; i++)
            cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(n, start, end);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends