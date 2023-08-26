//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct val{
	int first;
	int second;
};


// } Driver Code Ends
/*
The structure to use is as follows
struct val{
	int first;
	int second;
};*/

class Solution{
public:
    int maxChainLen(struct val p[],int n){
        sort(p, p + n, [](const val& a, const val& b)
        {
            return a.second < b.second;
        });
        int i, res = 0, mx = INT_MIN;
        for(i=0;i<n;i++)
        {
            if(p[i].first>mx)
            {
                res++;
                mx = p[i].second;
            }
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		val p[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i].first>>p[i].second;
		}
		Solution ob;
		cout<<ob.maxChainLen(p,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends