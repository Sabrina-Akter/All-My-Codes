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
        ll n, m, i;
        cin >> n >> m;
        vll v(m), gap;
        for(i=0;i<m;i++)
        {
            cin >> v[i];
        }
        sort(all(v));
        for(i=1;i<m;i++)
        {
            gap.pb(v[i]-v[i-1]-1);
        }
        gap.pb((v[0]-1)+(n-v[m-1]));
        sort(all(gap));
        ll j=gap.size(), k=0, sum=0;
        while(1)
        {
            j--;
            if(j==-1)
            {
                break;
            }
            if(gap[j]-k<=0)
            {
                break;
            }
            else if(gap[j]-k==1)
            {
                sum+=gap[j]-k;
                k+=2;
            }
            else if(gap[j]-k>1)
            {
                sum+=gap[j]-k-1;
                k+=4;
            }
        }
        cout << n-sum << nl;
    }
    return 0;
}