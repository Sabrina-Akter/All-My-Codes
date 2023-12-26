//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        int closing (string s, int pos)
        {
            stack <pair<char, int> > Stack;
            for(int i = 0; i < s.size(); i++)
            {
                if(s[i] == ']') 
                {
                    if(Stack.top().second == pos) return i;
                    Stack.pop();
                }
                else if(s[i] == '[') Stack.push({'[', i});
            }
            return 0;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		int pos; cin >> pos;
        Solution ob;
		cout <<ob.closing (s, pos) << '\n';
	}
}
// Contributed By: Pranay Bansal

// } Driver Code Ends