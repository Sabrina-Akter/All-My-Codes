//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
public:
    string magicalString(string S)
    {
        string ans;
        int x;
        for(int i = 0; i < S.size(); i++)
        {
            x = 26 - (S[i] - 'a') - 1;
            ans += 'a' + x;
        }
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
        string S;
        cin >> S;
        Solution ob;
        cout << ob.magicalString(S) << endl;
    }
    return 0; 
} 

// } Driver Code Ends