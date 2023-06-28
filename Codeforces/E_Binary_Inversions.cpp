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
        ll n, half, i, f=0, p_zero, f2=0; 
        ll cnt1=0, cnt2=0, cnt3=0, one1=0, one2=0, one3=0;
        cin >> n;
        half = n/2;
        vll v(n), v2(n), v3(n);
        for(i=0;i<n;i++)
        {
            cin >> v[i];
            v2[i] = v[i];
            v3[i] = v[i];
            if(i<half && f==0 && v[i]==0)
            {
                v2[i] = 1;
                f=1;
            }
            else if(i>=half && v[i]==1)
            {
                p_zero = i;
                f2=1;
            }
        }
        if(f2==1)
        {
            v3[p_zero] = 0;
        }
        for(i=0;i<n;i++)
        {
            one1+=v[i];
            one2+=v2[i];
            one3+=v3[i];
            if(v[i]==0)
            {
                cnt1+=one1;
            }
            if(v2[i]==0)
            {
                cnt2+=one2;
            }
            if(v3[i]==0)
            {
                cnt3+=one3;
            }
        }
        cout << max(max(cnt1, cnt2), cnt3) << nl;
    }
    return 0;
}