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

ll power(ll base,ll n)
{
	ll result=1;
	while(n)
	{
		if(n%2==1)
		{
			result=(result*base)%MOD;
			n--;
		}
		else {
			base=(base*base)%MOD;
			n/=2;
		}
	}
	return result%MOD;
}
int main()
{
    fastt;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        string v;
        while(k)
        {
            if(k%2==0)v+='0';
            else v+='1';
            k/=2;
        }
        ll ans=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]=='1')ans+=power(n,i);
            ans%=MOD;
        }
        cout<<ans<<endl;
    }
}