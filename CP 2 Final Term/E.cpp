#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
//#define N 100000

vll prime;
ll Prime[1000000]={0};

int main()
{
    fastt;
    Prime[1]=1;
    ll i, j, flag, t, c=0;
    prime.pb(1);
    for(i=2;i<=50000;i++)
    {
        flag=0;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            prime.pb(i);
            Prime[i]=1;
        }
    }
    ll n, x, y, J=0;
    cin >> n;
    for(i=1;i<=n;i++)
    {
        ll sum=0, M, N;
        cin >> x >> y;
        for(j=x-1;j>=0;j--)
        {
            if(prime[j]==y)
            {
                sum++;
                break;
            }
            else if(y%prime[j]==0)
            {
                sum+=y/prime[j];
                break;
            }
            else if(Prime[j]==1)
            {
                M = prime[j];
                N = y%prime[j];
                if((M<=prime[x-1] && N<=prime[x-1]) && (Prime[M]==1 && Prime[N]==1))
                {
                    sum+=y/prime[j];
                    sum++;
                    break;
                }
                else
                {
                    while(1)
                    {
                        if(Prime[Prime[y]-j]=)
                    }
                }
            }
        }
        cout << "Case " << i << ": " << sum << endl;
    }
    return 0;
}
