//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int isHappy(int N)
    {
        int t = 20, n = N, x;
        while(t--)
        {
            int sum = 0;
            while(n != 0)
            {
                x = n % 10;
                sum += (x * x);
                n /= 10;
            }
            n = sum;
            if(n == N && N != 1) return 0;
            else if(n == 1) return 1;
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends