#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main()
{
    int t; 
    cin>>t;
    while(t--)
    {
        int n,l,r; 
        cin>>n>>l>>r;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int s=0,j=0,c=0;
        for(int i=0;i<n;i++)
        {
            s=s+a[i];
            while(s>r)
            {
                s=s-a[j],j++;
            }
            if(s>=l&&s<=r) c++,j=i+1,s=0;
        }
        cout<<c<<endl;
    }
}