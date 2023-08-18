//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int checkRedundancy(string s) {
        int i, f=0, x=0;
        deque <char> d;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                d.push_back('(');
            }
            else if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/')
            {
                d.push_back('*');
            }
            else if(s[i]==')')
            {
                f=0;
                if(d.back()=='*')
                {
                    while(1)
                    {
                        if(d.back()=='(')
                        {
                            f=1;
                            d.pop_back();
                            break;
                        }
                        else if(d.back()=='*')
                        {
                            d.pop_back();
                        }
                    }
                }
                if(f==0)
                {
                    x = 1;
                    break;
                }
            }
        }
        return x;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        
    
        string s; 
        cin>>s;
        
        Solution obj;
        int res = obj.checkRedundancy(s);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends