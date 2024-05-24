//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
public:
    vector<int> countChars (string s)
    {
        s += ' ';
        vector <int> ans;
        string temp;
        for(int i = 0; i < s.size(); i++)
        {
           if(s[i] == ' ') 
           {
               ans.push_back(temp.size());
               temp = "";
           }
           else
           {
               temp += s[i];
           }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; 
    cin >> t;
    cin.ignore ();
    while (t--)
    {
        string s;
        getline (cin, s);
        Solution ob;
        vector <int> result = ob.countChars(s);
        for (int i : result)
            cout << i << " ";
        cout << endl;
    }
}
// } Driver Code Ends