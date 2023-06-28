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
    ll i, j, flag, t, c=0;
    for(i=2;i<=2001;i++)
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
    cin >> t;
    while(t--)
    {
        c++;
        ll flag=0;
        char cc;
        vector <char> C;
        string s;
        cin >> s;
        for(i=0;i<s.size();i++)
        {
            ll cnt=count(C.begin(),C.end(),s[i]);
            if(cnt==0)
            {
                C.pb(s[i]);
            }
        }
        sort(C.begin(), C.end());
        cout << "Case " << c << ": ";
        for(i=0;i<C.size();i++)
        {
            ll CC=count(s.begin(),s.end(),C[i]);
            ll cnt=count(prime.begin(),prime.end(),CC);
            if(cnt==1)
            {
                flag=1;
                cout << C[i];
            }
        }
        if(flag==0)
        {
            cout << "empty";
        }
        cout << endl;
    }
    return 0;
}
