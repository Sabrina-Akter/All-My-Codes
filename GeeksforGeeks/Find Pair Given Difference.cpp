//{ Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n)
{
    unordered_map <int, int> m;
    int i;
    for(i=0;i<size;i++)
    {
        if((m[abs(arr[i]-n)]==1) || (m[arr[i]+n]==1))
        {
            
            return true;
        }
        m[arr[i]] = 1;
    }
    return false;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}
// } Driver Code Ends
