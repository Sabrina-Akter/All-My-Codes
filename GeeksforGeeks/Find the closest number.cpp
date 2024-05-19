//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int findClosest( int n, int k,int arr[]) 
    { 
        auto it = lower_bound(arr, arr + n, k);
        int x = INT_MAX;
        if(it != arr + n) x = (*it);
        it--;
        int y = INT_MAX;
        if(it != arr) y = (*it);

        if(abs(x - k) <= abs(k - y))
        {
            return x;
        }
        else
        {
            return y;
        }
    } 
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(n,k,arr)<<endl;
    }
}

// } Driver Code Ends