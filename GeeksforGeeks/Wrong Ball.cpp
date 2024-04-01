//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int countWrongPlacedBalls(string s);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        cout<<countWrongPlacedBalls(a)<<endl;
        
    }
}

// } Driver Code Ends


int countWrongPlacedBalls(string s)
{
    int ans = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if((i % 2 == 0 && s[i] == 'B') || (i % 2 == 1 && s[i] == 'R'))
        {
            ans++;
        }
    }
    return ans;
}
