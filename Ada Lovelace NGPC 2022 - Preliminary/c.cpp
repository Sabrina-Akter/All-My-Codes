#include <bits/stdc++.h>
using namespace std;
#define fasttio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vv vector <ll>
#define pb push_back
#define     nl   "\n"
#define     PI   (acos(-1.0))
 
int main()
{
    ll n,t,i,j,k,p;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>p;
        ll ar[n+5];
        ll dis[n]={0};
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        for(i=0;i<n;i++)
        {
             dis[i] = abs(ar[i]-p);
        }
        sort(dis,dis+n);
        ll x=k-1,sum=0,nn=(n/k)*k;
        for(i=x;i<nn;i=i+k)
        {
            sum+=dis[i]*2;
        }
        cout<<sum<<endl;
    }
 
}