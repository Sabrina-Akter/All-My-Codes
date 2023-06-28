#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
//#define N 100000

vll prime;

int main()
{
    fastt;
    ll i, j, flag,n;
    prime.pb(2);
    for(i=3;i<=1000000;)
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
        }
        i=i+2;
    }
    while(cin>>n)
    {
        ll flag=0;
        if(n==0)
        {
            break;
        }
        else
        {
            cout << n << ":" << endl;
            if(n%2!=0)
            {
                ll m=n-2;
                ll c1=count(prime.begin(),prime.end(),m);
                if(c1==1)
                {
                    cout << "2+" << m << endl;
                }
                else
                {
                    cout << "NO WAY!" << endl;
                }
            }
            else
            {
                for(i=2; i<=(n/2)+1; i++)
                {
                    ll c1=count(prime.begin(),prime.end(),i);
                    if(c1==1)
                    {
                        ll m=n-i;
                        ll c2=count(prime.begin(),prime.end(),m);
                        if(c2==1)
                        {
                            cout << i << "+" << m << endl;
                            flag=1;
                            break;
                        }
                    }
                }
                if(flag==0)
                {
                    cout << "NO WAY!" << endl;
                }
            }
        }
    }
    return 0;
}
