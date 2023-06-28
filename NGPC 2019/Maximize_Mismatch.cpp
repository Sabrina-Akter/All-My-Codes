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
    ll t;
    cin >> t;
    while(t--)
    {
        ll i, n, k, cnt=0, flag=0, tmp, a=0, b=0;
        cin >> n >> k;
        vll v(n+1), x;
        v[0]=0;
        for(i=1;i<=n;i++)
        {
            cin >> v[i];
        }
        while(1)
        {
            a = b;
            for(i=1;i<n;i++)
            {
                if(cnt==k)
                {
                    flag=1;
                    break;
                }
                if((v[i]!=(i+1)) && (v[i+1]!=i) && (v[i]!=i) && (v[i+1]!=(i+1)))
                {
                    while(1)
                    {
                        if(cnt==k)
                        {
                            break;
                        }
                        cnt++;
                        tmp = v[i];
                        v[i] = v[i+1];
                        v[i+1] = tmp;
                        b++;
                        x.pb(i);
                        x.pb(i+1);
                    }
                }
                else if((v[i]==i) || (v[i+1]==(i+1)))
                {
                    cnt++;
                    tmp = v[i];
                    v[i] = v[i+1];
                    v[i+1] = tmp;
                    b++;
                    x.pb(i);
                    x.pb(i+1);
                }
            }
            if(flag==1)
            {
                break;
            }
            if(a==b)
            {
                break;
            }
        }
        cout << cnt << nl;
        for(i=0;i<x.size();i++)
        {
            if(i%2==0)
            {
                cout << x[i] << " " << x[i+1] << nl;
                i++;
            }
        }
    }
    return 0;
}