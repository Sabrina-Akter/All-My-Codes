#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ms(x) memset(x, 0, sizeof x)

const int MOD = 1000000007;
const char nl = '\n';

int X[]={+0,+0,+1,-1,-1,+1,-1,+1};   // King's Moves
int Y[]={-1,+1,+0,+0,+1,+1,-1,-1};  // King's Moves

int KX[]={-2,-2,-1,-1,1,1,2,2};  // Knight's Move
int KY[]={-1,1,-2,2,-2,2,-1,1}; // Knight's Move

int main()
{
    fastt;
    ll n, f=0, i, cnt=0;
    cin >> n;
    vll v;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            f=1;
            cnt++;
            v.pb(i);
            if(i!=n/i)
            {
                cnt++;
                v.pb(n/i);
            }
        }
    }
    if(f==0)
    {
        cout << 1 << nl;
        cout << 0 << nl;
    }
    else
    {
        if(cnt<=2)
        {
            sort(all(v));
            for(i=0;i<v.size();i++)
            {
                cnt=0;
                for(ll j=2;j*j<=v[i];j++)
                {
                    if(v[i]%j==0)
                    {
                        cnt++;
                        cout << 1 << nl;
                        cout << v[i] << nl;
                        break;
                    }
                }
                if(cnt==1)
                {
                    break;
                }
            }
            if(cnt==0)
            {
                cout << 2 << nl;
            }
        }
        else
        {
            sort(all(v));
            for(i=0;i<v.size();i++)
            {
                cnt=0;
                for(ll j=2;j*j<=v[i];j++)
                {
                    if(v[i]%j==0)
                    {
                        cnt++;
                        if(j!=v[i]/j)
                        {
                            cnt++;
                        }
                    }
                }
                if(cnt>=1 && cnt<=2)
                {
                    cout << 1 << nl;
                    cout << v[i] << nl;
                    break;
                }
            }
        }
    }
    return 0;
}