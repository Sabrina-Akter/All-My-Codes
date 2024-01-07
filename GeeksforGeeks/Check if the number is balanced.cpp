//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool balancedNumber(string N)
	{
	    int n = N.size();
	    int mid = n / 2;
	    int left_sum = 0;
	    int right_sum = 0;
	    for(int i = 0; i < mid; i++)
	    {
	        left_sum += N[i];
	    }
	    for(int i = n - 1; i > mid; i--)
	    {
	        right_sum += N[i];
	    }
	    return (left_sum == right_sum) ? true : false;
	}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string N;
        cin>>N;
        Solution ob;
        cout<<ob.balancedNumber(N)<<endl;
    }
    return 0;
}

// } Driver Code Ends