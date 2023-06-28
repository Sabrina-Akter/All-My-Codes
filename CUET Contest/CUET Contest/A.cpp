#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define mxx 1000
map<ll,ll>a;
map<ll,ll>primes;
void seive()
{
    ll i,j;
    a[1]=1;
    for( i=3; i<=mxx;i++)
    {
        if(a[i]==0)
        {
            for(j=i*i; j<=mxx;j+=i)
            {
                a[j]=1;
            }
        }
    }
    ll p=1;
    primes[0]=2;
    for( i=3; i<=mxx; i+2)
    {
        if(a[i]==0)
        {
            primes[p]=i;
            p++;
        }
    }
}

int main()
{
    ll l,r,x,y,i,j,t;
    seive();
    // cin>>t;
    // while(t--)
    // {
    //     cin>>l>>r;
    //     ll cnt=0;
    //     for(i=0; primes[i]<=r; i++)
    //     {
    //         if(primes[i]<=l)
    //             cnt++;
    //     }
    //     cout << cnt << endl;
    // }
return 0;
}