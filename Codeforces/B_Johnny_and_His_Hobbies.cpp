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
	int t;
	cin>>t;
	while(t--)
	{
		ll n,mx=0;
		set <ll> a;
		cin>>n;
		for(ll i=0,temp;i<n;i++)
		{
			cin>>temp;
			a.insert(temp);
			mx=max(mx,temp);
		}
		ll div=1;
		bool check=false;
		while(div<=1024)
		{
			set <ll> s;
			for(auto i: a)
			{
				s.insert(i^div);
				
			}
			if(a==s)
			{
				check=true;
				break;
			}
			div++;
		}
		if(!check)
			cout<<-1<<endl;
		else
			cout<<div<<endl;
	}
    return 0;
}