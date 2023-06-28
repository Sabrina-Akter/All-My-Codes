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
        ll i, j, k, n, sum, cnt=0, flag;
        cin >> n;
        vll v(n), x(n);
        vector <pair <ll, ll> > a;
        for(i=0;i<n;i++)
        {
            cin >> v[i];
            x[i] = v[i];
            a.pb({v[i], i});
        }
        sort(all(x));
        sort(all(a));
        for(i=0;i<n;i++)
        {
            flag=0;
            for(j=i+1;j<n;j++)
            {
                sum = v[i]+v[j];
                auto it = lb(all(x), sum);
                ll pos = it-x.begin();
                flag=0;
                for(k=pos;k<n;k++)
                {
                    if(pos>=n)
                    {
                        break;
                    }
                    else if(a[pos].ss>=i && a[pos].ss<=j)
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                {
                    cnt++;
                }
            }
        }
        cout << cnt << nl;
    }
    return 0;
}
