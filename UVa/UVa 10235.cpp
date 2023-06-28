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
    for(i=3;i<1000000;)
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
        string s=to_string(n);
        reverse(s.begin(),s.end());
        ll m=stoll(s);
        ll c1=count(prime.begin(),prime.end(),n);
        if(c1==0)
        {
            cout << n << " is not prime." << endl;
        }
        else
        {
            ll c2=count(prime.begin(),prime.end(),m);
            if((c1==1 && c2==1) && (n!=m))
            {
                cout << n << " is emirp." << endl;
            }
            else
            {
                cout << n << " is prime." << endl;
            }
        }
    }
    return 0;
}
