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
    ll node, wire, i, u, v, l, h, mn=LONG_LONG_MAX, mx=LONG_LONG_MIN;
    cin >> node >> wire;
    vll U(wire), V(wire), L(wire), H(wire), E(wire), N_pos(node+1), N_neg(node+1);
    for(i=0;i<wire;i++)
    {
        cin >> u >> v >> l >> h;
        U[i] = u;
        V[i] = v;
        L[i] = l;
        mn = min(mn, l);
        H[i] = h;
        mx = max(mx, h);
    }
    ll left = mn, right = mx , mid, ans;
    while(left<right)
    {
        double L = left, R = right, check;
        check = (L+R)/2;
        mid = (left+right)/2;
        cout << "mid = " << mid << nl;
        if(mid!=check)
        {
            mid++;
        }
        ll f=0;
        for(i=0;i<wire;i++)
        {
            if(mid<U[i] || mid>V[i])
            {
                f = 1;
                if(mid>U[i])
                {
                    left = mid;
                }
                else
                {
                    right = mid+1;
                }
                break;
            }
        }
        if(f==0)
        {
            ans = mid;
            break;
        }
    }  
    cout << ans << nl;  
    return 0;
}