//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    string sequence(string st)
    {
        string ans;
        for(int i = 0; i < st.size(); i++)
        {
            if(ans.size() >= 2 && st[i] == ans[ans.size() - 1] && st[i] == ans[ans.size() - 2])
            {
                continue;
            }
            else
            {
                ans += st[i];
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string st;
        cin>>st;
        
        Solution ob;
        cout<<ob.sequence(st)<<endl;
    }
    return 0;
}
// } Driver Code Ends