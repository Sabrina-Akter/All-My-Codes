//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
        int arr[10005];

        int f(int i, int n)
        {
            if(arr[i]!=-1)
            {
                return arr[i];
            }
            if(i==n-1 || i==n)
            {
                return 1;
            }
            else
            {
                return arr[i] = (f(i+1, n) + f(i+2, n)) % (1000000007);
            }
        }

		int nthStair(int n){
            memset(arr, -1, sizeof(arr));
            return f(0, n);
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthStair(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends