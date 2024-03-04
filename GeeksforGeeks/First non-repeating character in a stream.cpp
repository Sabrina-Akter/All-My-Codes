//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
	public:
		string FirstNonRepeating(string A)
		{
		    unordered_map <char, int> cnt;
		    string ans;
		    vector <char> order;
		    int x = 0;
		    for(int i = 0; i < A.size(); i++)
		    {
		        cnt[A[i]]++;
		        if(cnt[A[i]] == 1) order.push_back(A[i]);
		        if(cnt[order[x]] != 1)
		        {
		            while(1)
		            {
    		            if(x + 1 == order.size())
    		            {
    		                ans += '#';
    		                break;
    		            }
    		            else
    		            {
    		                x++;
    		                if(cnt[order[x]] == 1)
    		                {
    		                   ans += order[x];
    		                   break;
    		                }
    		            }		                
		            }
		        }
		        else
		        {
		            ans += order[x];
		        }
		    }
		    return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends