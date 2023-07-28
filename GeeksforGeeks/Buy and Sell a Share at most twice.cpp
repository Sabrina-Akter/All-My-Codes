//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

int maxProfit(vector<int>&price){
    vector <int> v;
    int i, profit=0, f=0, ans=0;
    for(i=0;i<price.size();i++)
    {
        if(price[i]>price[i-1])
        {
            profit+=(price[i]-price[i-1]);
            f=1;
        }
        else
        {
            if(f==1)
            {
                v.push_back(profit);
            }         
            profit=0;
            f=2;
        }
    }
    if(f==1)
    {
        v.push_back(profit);
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    if(v.size()==1)
    {
        ans = v[0];
    }
    else if(v.size()>=2)
    {
        ans = v[0]+v[1];
    }
    return ans;
}

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> price(n);
        for(int i=0;i<n;i++) cin>>price[i];
        cout<<maxProfit(price)<<endl;
    }

}

// } Driver Code Ends