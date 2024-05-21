//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string shortestPath (string S)
    {
        unordered_map <char, int> mp = {{'S', 0}, {'N', 0}, {'E', 0}, {'W', 0}};
        for(auto &it : S)
        {
            mp[it]++;
        }
        string ans;
        char temp;
        if(mp['S'] > mp['N'])
        {
            temp = 'S';
        }
        else if(mp['N'] > mp['S'])
        {
            temp = 'N';
        }
        for(int i = 0; i < abs(mp['S'] - mp['N']); i++) ans += temp;
        
        if(mp['E'] > mp['W'])
        {
            temp = 'E';
        }
        else if(mp['W'] > mp['E'])
        {
            temp = 'W';
        }
        for(int i = 0; i < abs(mp['W'] - mp['E']); i++) ans += temp;  
        sort(ans.begin(), ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.shortestPath (s) << endl;
    }
}

// } Driver Code Ends