//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        vector <pair<int, int>> Pair;
        for(int i = 0; i < n; i++)
        {
            Pair.push_back({end[i], start[i]});
        }
        sort(Pair.begin(), Pair.end());
        int prev_first = Pair[0].first;
        int prev_second = Pair[0].second;
        int ans = 1;
        for(int i = 1; i < Pair.size(); i++)
        {
            int cur_first = Pair[i].first;
            int cur_second = Pair[i].second;
            if(cur_second > prev_first)
            {
                ans++;
                prev_first = Pair[i].first;
                prev_second = Pair[i].second;                
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    
    //testcases
    cin >> t;
    while(t--)
    {
        //size of array
        int n;
        cin >> n;
        vector<int> start(n), end(n);
        
        //adding elements to arrays start and end
        for(int i=0;i<n;i++)
            cin>>start[i];
        for(int i=0;i<n;i++)
            cin>>end[i];
        Solution ob;
        //function call
        cout << ob.activitySelection(start, end, n) << endl;
    }
    return 0;
}

// } Driver Code Ends