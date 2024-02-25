//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    
    string modify (string s)
    {
        bool lower = false;
        for(int i = 0; i < s.size(); i++)
        {
            if(i == 0)
            {
                if(islower(s[i])) lower = true;
            }
            else
            {
                if(lower == true) s[i] = tolower(s[i]);
                else s[i] = toupper(s[i]);
            }
        }
        return s;
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
		cout << ob.modify (s) << endl;
	}
}
// } Driver Code Ends