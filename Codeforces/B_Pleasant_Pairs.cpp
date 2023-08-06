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
        int n;
        cin>>n;
        int ar[n+2];
        for(int i=1;i<=n;i++)cin>>ar[i];
        ll ans=0;
        for(int i=2;i<=n;i++)
        {
            int z=i+i-1;
            if(ar[i]>z)continue;
            int x=(z%ar[i]+1);
            int y=i-x;
            while(y>=1)
            {
                if(y+i==ar[i]*ar[y])ans++;
                y-=ar[i];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
