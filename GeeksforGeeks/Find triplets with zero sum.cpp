//{ Driver Code Starts
#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

// } Driver Code Ends
/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        int i, j, sum, rem, f=0;
        unordered_map <int, int> m;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                sum = arr[i]+arr[j];
                rem = 0-sum;
                if(m[rem]!=0)
                {
                    f=1;
                    break;
                }
            }
            if(f==1)
            {
                break;
            }
            m[arr[i]]++;
        }
        if(f==1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	Solution obj;
        if(obj.findTriplets(arr, n))
            cout<<"1"<<endl;
        else 
            cout<<"0"<<endl;
	}
    return 0;
}
// } Driver Code Ends