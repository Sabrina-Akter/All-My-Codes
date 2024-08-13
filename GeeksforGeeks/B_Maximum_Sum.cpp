#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
    cin>>t;
	while(t--)
    {
		int n,k;
        cin>>n>>k;
		int a[n];
        long long c=0,l=0,m=0;
		int s=1e9+7;
		for(int i=0;i<n;++i)
        {
			cin>>a[i];
			l=(l+a[i])%s;
			if(c<0)c=0;
			c+=a[i];
			m=max(m,c);
		}
		for(int j=0;j<k;++j)
        {
			l=(l+m+s)%s;
			m=(m*2)%s;
		}
		cout<<l<<endl;
	}return 0;
}