//{ Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


int findPair(int n, int x, vector<int> &arr) 
{
    unordered_map <int, int> num;
    for(int i = 0; i < n; i++)
    {
        if(num.count(arr[i] - x) == true || num.count(arr[i] + x) == true) return 1;
        num[arr[i]] = 1;
    }
    return -1;
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
