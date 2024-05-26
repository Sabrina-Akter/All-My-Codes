//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
public:
    string reverseAlternate(string str)
    {
        str += ' ';
        string ans, temp;
        int num = 0;
        for(int i = 0; i < str.size(); i++)
        {
           if(str[i] == ' ') 
           {
               num++;
               if(num % 2 == 0)
               {
                   reverse(temp.begin(), temp.end());
               }
               ans = ans + temp;
               ans += ' ';
               temp = "";
           }
           else
           {
               temp += str[i];
           }
        }
        ans.pop_back();
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        Solution ob;
        cout<<ob.reverseAlternate(str)<<endl;
    }
    return 0;
}

// } Driver Code Ends