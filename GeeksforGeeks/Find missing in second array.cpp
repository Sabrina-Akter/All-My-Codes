//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	vector<int> findMissing(int a[], int b[], int n, int m) 
	{ 
	    unordered_map <int, int> present;
	    for(int i = 0; i < n; i++)
	    {
	        present[a[i]] = 1;
	    }
	    for(int i = 0; i < m; i++)
	    {
	        if(present.count(b[i]) == true) present[b[i]] = 2;
	    } 
	    vector <int> ans;
	    for(int i = 0; i < n; i++)
	    {
	        if(present[a[i]] == 1) ans.push_back(a[i]);
	    }
	    return ans;
	} 
};
	

//{ Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
        cin>>n;
        int m;
        cin>>m;
        int a[n];
        int b[m];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<m;i++)
        cin >> b[i];
        vector<int> ans;
        

        Solution ob;
        ans=ob.findMissing(a,b,n,m);
        for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
	    
        
	    cout << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends