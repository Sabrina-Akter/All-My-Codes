//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack <char> Stack;
        unordered_map <char, char> paren = {{'}', '{'}, {')', '('}, {']', '['}};
        for(int i = 0; i < x.size(); i++)
        {
            if(paren.count(x[i]) == false) Stack.push(x[i]);
            else
            {
                if(Stack.empty() == false && Stack.top() == paren[x[i]]) Stack.pop();
                else return false;
            }
        }
        return Stack.empty() ? true : false;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends