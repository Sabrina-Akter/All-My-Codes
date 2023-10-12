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
#define pll pair<ll,ll>
#define plll pair<pll,ll>

const int MOD = 1000000007;
const char nl = '\n';

int X[]={+0,+0,+1,-1,-1,+1,-1,+1};   // L, R, D, U, TR, BR, TL, BL
int Y[]={-1,+1,+0,+0,+1,+1,-1,-1};  //

int KX[]={-2,-2,-1,-1,1,1,2,2};  // Knight's Move
int KY[]={-1,1,-2,2,-2,2,-1,1}; // Knight's Move

int main()
{
    fastt;
    ll t, cs=0;
    cin >> t;
    while(t--)
    {
        cs++;
        cout << "Case " << cs << ": ";
        ll n, i;
        cin >> n;
        ll a, b;
        cin >> a >> b;
        vll v(n);
        for(i=0;i<n;i++)
        {
            cin >> v[i];
        }
        sort(all(v));
        ll cnt=0;
        for(i=0;i<n;i++)
        {
            ll first = a-v[i], second = b-v[i];
            auto it1 = lb(v.begin()+i+1, v.end(), first);
            ll pos1 = it1-v.begin();
            //cout << "For " << i << ":\n";
            if(pos1==n)
            {
                pos1--;
            }
            auto it2 = ub(v.begin()+i+1, v.end(), second);
            ll pos2 = it2-v.begin();
            pos2--;
            //cout << pos1 << " " << pos2 << nl;
            if(pos1==i || pos2==i || pos1>pos2)
            {
                continue;
            }
            else if(pos1==pos2)
            {
                ll sum = v[i] + v[pos1];
                if(sum>=a && sum<=b)
                {
                    cnt++;
                }
            }
            else
            {
                cnt+=(pos2-pos1)+1;
            }
        }
        cout << cnt << nl;
    }
    return 0;
}