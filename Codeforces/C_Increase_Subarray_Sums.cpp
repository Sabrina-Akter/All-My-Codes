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
        ll n, x;
        cin>>n>>x;
        ll ar[n+3];
        for(ll i=0;i<n;i++)cin>>ar[i];
        vll v;
        ll sum1=0;
        for(int i=0;i<n;i++)
        {
            sum1+=ar[i];
            int mx = sum1;
            int sum=sum1;
            int k = 0;
            for(int j=i+1;j<n;j++)
            {
                sum+=ar[j];
                sum-=ar[k];
                k++;
                mx = max(mx,sum);
            }
            v.push_back(mx);
        }
        for(int i=0;i<=n;i++)
        {
            int mx = 0;
            for(int j=0;j<v.size();j++)
            {
                int sum;
                if(i>j+1)
                {
                    sum=v[j]+x*(j+1);
                }
                else{
                    sum=v[j]+x*i;
                }
                mx = max(mx,sum);
            }
            cout<<mx<<" ";;
        }
        cout << nl;
    }
    return 0;
}