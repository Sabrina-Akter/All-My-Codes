//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>

using namespace std;



// } Driver Code Ends


class Solution{
public:
    int minOperations(int *a,int n)
    {
        if(n==1)
        {
            return 0;
        }
        int i, sum=0, need;
        for(i=1;i<n;i++)
        {
            if(a[i]>a[i-1])
            {
                need = a[i-1];
                sum+=need;
            }
        }
        return need;
    }
};

//{ Driver Code Starts.

int main() {
    
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int  a[n+1];
        for(int i=0;i<n;i++)
            cin>>a[i];
            
        Solution ob;
        cout<<ob.minOperations(a,n)<<endl;
    }
    
	return 0;
}
// } Driver Code Ends