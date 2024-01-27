//{ Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int minValueToBalance(int a[], int n)
    {
       int sum1 = 0;
       int sum2 = 0;
       int half = n/2;
       for(int i = 0; i < n; i++)
       {
           if(i < half) sum1 += a[i];
           else sum2 += a[i];
       }
       int ans = abs(sum1 - sum2);
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
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;	
		cout<<ob.minValueToBalance(a,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends