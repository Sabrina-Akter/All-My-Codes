//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        long long ans = 1;
        long long left = 0;
        long long right = x;
        long long mid;
        long long prod;
        
        while(left <= right)
        {
            mid = left + ((right - left) / 2);
            prod = mid * mid;
            
            if(prod == x) return mid;
            else if(prod > x) right = mid - 1;
            else if(prod < x)
            {
                ans = mid;
                left = mid + 1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends