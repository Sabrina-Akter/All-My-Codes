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
    ll t, i, x, n, mn, cnt, cnt2, last, temp;
    cin >> t;
    while(t--)
    {
        cin >> n;
        set <int> s;
        vll v(n);
        ll zero = 0;
        for(i = 0; i < n; i++)
        {
            cin >> x;
            if(x == 0) zero++;
            v[i] = x;
            s.insert(x);
        }
        mn = 0;
        for(auto &it : s)
        {
            if(it == mn) mn++;
        }
        x = mn + 1;
        last = 0, cnt = 0, cnt2 = 0;
        for(i = 0; i < n; i++)
        {
            if(v[i] >= x) cnt2++;
            if(v[i] == x) temp = 1;
            else if (v[i] < x) temp = 2;
            if(temp != last && temp == 1) cnt++;
            last = temp;
        }
        //cout << cnt << " " << cnt2 << nl;
        if(zero == n && n > 1) cnt = 1;
        if(cnt == 0 && (cnt2 > 0 || n > mn)) cnt = 1;
        if(cnt == 1) cout << "Yes" << nl;
        else cout << "No" << nl;
    }
    return 0;
}
