//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int penaltyScore(string S)
	{
	    int ans = 0;
	    for(int i = 0; i < S.size(); i++)
	    {
	        if(i + 1 < S.size() && S[i] == '2' && S[i + 1] == '1')
	        {
	            ans++;
	        }
	    }
	    return ans;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string S;
   		cin >> S;

   	    Solution ob;

   		cout << ob.penaltyScore(S) << "\n";
   	}

    return 0;
}
// } Driver Code Ends