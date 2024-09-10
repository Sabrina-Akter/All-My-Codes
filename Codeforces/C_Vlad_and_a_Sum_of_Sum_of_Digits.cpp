#include<bits/stdc++.h>
using namespace std;
int a[200002],x=0,i=0,n,j,t;

int main()
{
	cin>>t;
	for(;i<=2e5;i++)
    {
		for(int j=i;j;j/=10)x+=j%10;
		a[i]=x;
	}
	while(t--)
    {
		cin>>n;
		cout<<a[n]<<"\n";
	}
	return 0;
}