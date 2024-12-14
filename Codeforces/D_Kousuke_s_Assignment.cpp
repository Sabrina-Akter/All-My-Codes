#include<bits/stdc++.h>
#define ll long long
using namespace std;
signed main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,ss=0,ans=0;
		cin>>n;
		map<ll,ll>mp;
		mp[0]=1;
		for(ll i=1;i<=n;i++)
		{
			ll x;
			cin>>x;
			ss+=x;
			if(mp[ss])
			{
				ans++;
				mp.clear();
			}
			mp[ss]=1;
		}
		cout<<ans<<"\n";
	}
}