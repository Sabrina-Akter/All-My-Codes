//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*Returns an array of all n-bit gray codes sequence.
You are required to complete below method. */
class Solution
{
  public:
    void rec(int N, vector <string> &ans, string s)
    {
        if(s.size() >= N)
        {
            ans.push_back(s);
        }
        else
        {
            rec(N, ans, s += '0');
            s.pop_back();
            rec(N, ans, s += '1');
        }
    }
  
    vector <string> generateCode(int N)
    {
         vector <string> ans;
         rec(N, ans, "");
         return ans;
    }
};

//{ Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution obj;
		vector <string> res = obj.generateCode(n);
		for (string i : res) cout << i << " ";
        cout<<endl;
	}
	return 0;
}


// } Driver Code Ends