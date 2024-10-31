#include<bits/stdc++.h>
using namespace std;
int n,i,j,x,r,s,h[102];
int main()
{
	for(cin>>n;i<n;i++)cin>>x,h[x]=1,s+=x;
	for(x=2;x<101;x++)for(i=1;i<101;i++)for(j=1;j<101;j++)
		if(h[i]&&h[j]&&i-j&&i%x==0)r=max(r,i+j-i/x-j*x);
	cout<<s-r<<endl;
}