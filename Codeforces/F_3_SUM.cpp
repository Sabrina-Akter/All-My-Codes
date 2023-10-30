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
    ll t;
    cin >> t;
    while(t--)
    {
	    ll n;
	    cin >> n;
	    ll cnt[10] = {};
	    for (ll i = 0; i < n; i++) 
        {
		    ll x;
		    cin >> x;
		    cnt[x % 10]++;
	    }
	    vector<ll> v;
        ll three = 3;
	    for (ll i = 0; i < 10; i++) 
        {
		    for (ll j = 0; j < min(cnt[i], three); j++) 
            {
			    v.push_back(i);
		    }	
	    }
	    ll m = v.size();
        ll flag=0;
	    for (ll i = 0; i < m; i++) 
        {
		    for (ll j = i + 1; j < m; j++) 
            {
			    for (ll k = j + 1; k < m; k++) 
                {
				    if ((v[i] + v[j] + v[k]) % 10 == 3) 
                    {
                        cout << "YES\n"; 
                        flag=1;
                        break;
                    }
			    }
                if(flag==1)
                {
                    break;
                }
		    }
            if(flag==1)
            {
                break;
            }
	    }
        if(flag==0)
        {
            cout << "NO\n"; 
        }	       
    }
    return 0;
}