//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// ranges[i][0] is the start of ith range
// ranges[i][1] is the end of ith range

class Solution
{
public:
    int max_non_overlapping( vector< vector<int> >& ranges )
    {
        for (auto& pair : ranges) 
        {
            swap(pair[0], pair[1]);
        }  
        sort(ranges.begin(), ranges.end());
        
        int last = -1;
        int ans = 0;
        for (auto& pair : ranges) 
        {
            if(pair[1] >= last)
            {
                last = pair[0];
                ans++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		vector< vector<int> > v(n,vector<int>(2));
		for(int i=0; i<n; i++)
			cin>> v[i][0] >> v[i][1];
			
        Solution ob;
		cout<< ob.max_non_overlapping(v) << endl;
	}
	return 1;
}


// } Driver Code Ends