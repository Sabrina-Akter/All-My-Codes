#include<bits/stdc++.h>
using namespace std;
int t,n,k;
int a[200050];
int main()
{
	cin>>t;
	while(t--)
    {
		cin>>n>>k;
		for(int i=1;i<=n;i++)
        {
			cin>>a[i];
		}
		sort(a+1,a+n+1);
		int r=n;
		int ans=1;
		for(int i=n-1;i>=1;i--)
		{
			if(a[i+1]-a[i]>1)r=i;
			while(a[r]-a[i]>=k)r--;
			ans=max(ans,r-i+1);
		}
		cout<<ans<<endl;
	}
}