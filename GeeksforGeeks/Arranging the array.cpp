//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

// } Driver Code Ends
class Solution
{
    public:
        void Rearrange(int arr[], int n)
        {
            vector <int> pos;
            vector <int> neg;
            for(int i = 0; i < n; i++)
            {
                if(arr[i] >= 0) pos.push_back(arr[i]);
                else neg.push_back(arr[i]);
            }
            int i = 0;
            for(auto &it : neg)
            {
                arr[i] = it;
                i++;
            }
            for(auto &it : pos)
            {
                arr[i] = it;
                i++;
            }
        }
};

//{ Driver Code Starts.
void Rearrange(int arr[], int n);

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        long long j=0;
        Solution ob;
        ob.Rearrange(arr, n);
      
        for (int i = 0; i < n; i++) 
            cout << arr[i] << " "; 
        cout << endl;  
    }
    return 0; 
} 
// } Driver Code Ends