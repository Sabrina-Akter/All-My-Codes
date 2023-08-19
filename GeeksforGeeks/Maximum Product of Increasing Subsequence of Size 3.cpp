//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 



// } Driver Code Ends


class Solution{
  public:
    vector<int> maxProductSubsequence(int *arr , int n) 
    { 
        set <int> s;
        int i, mxx=0, x, y, z;
        long long prod=0, test;
        vector <int> mn(n), mx(n), ans, v(n);
        for(i=0;i<n;i++)
        {
            v[i] = arr[i];
            auto pos = s.insert(v[i]);
            auto it = pos.first;
            if(it==s.begin())
            {
                mn[i] = -1;
            }
            else
            {
                it--;
                mn[i] = (*it);
            }
        }
        for(i=n-2;i>=0;i--)
        {
            mxx = max(mxx, v[i+1]);
            mx[i] = mxx;
        }
        for(i=1;i<n-1;i++)
        {
            test = ((long long int)mn[i]*v[i]*mx[i]);
            if(test>prod  && mn[i]<v[i] && v[i]<mx[i])
            {
                prod = ((long long int)test);
                x = mn[i], y = v[i], z = mx[i];
            }
        }
        if(prod<=0)
        {
            ans = {-1};
        }
        else
        {
            ans = {x, y, z};
        }
        return ans;
    } 

};

//{ Driver Code Starts.
// Driver Program 
int main() 
{ 
	int T;
	cin>>T;
	while(T--){
	    
	    int num;
	    cin>>num;
	    int arr[num];
	    for(int i = 0; i<num; ++i)
	        cin>>arr[i];
	    
	    vector<int> res;
	    Solution obj;
	    res = obj.maxProductSubsequence(arr, num);
	    
	    if(res[0] == -1)
	        cout<<"Not Present\n";
	    else{
    	    for(int i = 0; i<3; ++i)
    	        cout<<res[i]<<" ";
    	    cout<<"\n";
	    }
	    
	}
} 

// } Driver Code Ends