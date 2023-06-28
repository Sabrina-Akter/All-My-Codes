#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
//#define N 100000

vll prime;
ll a;
bool cc(ll n)
{
    if(n<=a)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    fastt;
    ll i, j, flag, b, mid, N, start, mid_N,x;
    for(i=1;i<=1000;i++)
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
    }
    while(cin>>a>>b)
    {
        x=0;
        ll c=count_if(prime.begin(),prime.end(),cc);
        if(c%2==0)
        {
            N=2*b;
        }
        else
        {
            N=(2*b)-1;
        }
        mid_N=N/2;
        mid=c/2;
        start=mid-mid_N;
        if(start<0)
        {
            start=0;
        }
        cout << a << " " << b << ":";
        for(i=start;i<prime.size();i++)
        {
            x++;
            if(x>N|| prime[i]>a)
            {
                break;
            }
            else
            {
                cout << " " << prime[i];
            }
        }
        cout << endl;
        cout << endl;
    }
    return 0;
}
