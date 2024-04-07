//{ Driver Code Starts
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> RopeCutting(int arr[], int n)
    {
        map <int, int> freq;
        for(int i = 0; i < n; i++)
        {
            freq[arr[i]]++;
        }
        int sum = 0;
        vector <int> ans;
        for(auto &it : freq)
        {
            sum += it.second;
            if(n - sum != 0) ans.push_back(n - sum);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{   
    int T;
    cin>> T;
    while(T--)
    {
       	int n;
       	cin>>n;
       	int arr[n+1];
       	for(int i=0;i<n;i++)
       	   cin>>arr[i];
        
        vector<int> v;
        Solution ob;
        v = ob.RopeCutting(arr, n);
        for(int i : v){
            cout << i << " ";
        }
        cout << endl;
        
        
    }
  return 0;
}
// } Driver Code Ends