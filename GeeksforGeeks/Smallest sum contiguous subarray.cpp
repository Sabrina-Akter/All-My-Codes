//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution
{
  public:
  int smallestSumSubarray(vector<int>& a)
  {
      int mn = INT_MAX;
      int sum = 0;
      for(int i = 0; i < a.size(); i++)
      {
          sum += a[i];
          mn = min(mn, sum);
          if(sum >= 0) sum = 0;
      }
      sum = 0;
      for(int i = a.size() - 1; i >= 0; i--)
      {
          sum += a[i];
          mn = min(mn, sum);
          if(sum >= 0) sum = 0;         
      }
      return mn;
  }
};


//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        Solution ob;
        
        int ans = ob.smallestSumSubarray(a);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends