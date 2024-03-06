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
	ll k;
	cin>>k;
 
	string s = "codeforces";
 
	ll val[11];
	for (ll i = 0; i < 11; i++) 
    {
		val[i] = 1;
	}
 
	ll prod = 1;
	while (prod < k) 
    {
		for (ll i = 0; i < 10; i++) 
        {
			val[i]++;
			prod = prod/(val[i]-1);
			prod = prod * val[i];
 
			if (prod >= k) 
            {
				break;
			}
		}
	}
 
	for (ll i = 0; i < 10; i++) 
    {
		while (val[i] > 0) 
        {
			cout << s[i];
			val[i]--;
		}
	} 
    cout << "\n";
    return 0;
}