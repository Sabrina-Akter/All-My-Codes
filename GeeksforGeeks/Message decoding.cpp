//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

bool decode (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << decode (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


bool decode (string S)
{
    string hello = "hello";
    int cnt = 0;
    int i = 0;
    for(int j = 0; j < S.size(); j++)
    {
        if(hello[i] == S[j])
        {
            i++;
            cnt++;
        }
        if(cnt == 5) return true;
    }
    return false;
}