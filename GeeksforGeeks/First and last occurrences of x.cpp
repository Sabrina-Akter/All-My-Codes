//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        int first, second, i;
        auto it1 = lower_bound(arr, arr+n, x);
        auto it2 = upper_bound(arr, arr+n, x);
        it2--;
        first = it1-arr;
        second = it2-arr;
        if(second<first)
        {
            first = -1, second = -1;
        }
        vector <int> ans = {first, second};
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
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends