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
    ll n, m, i, j=1, k, cnt=0, sum=0;
    cin >> n >> m;
    ll mn = min(n, m), mx = max(n, m);
    vll v1 = {0,4,3,2,1,5}, v2 = {0,9,8,7,6,10};
    k = 0;
    for(i=1;i<=mn;i++)
    {
        k++;
        if(((i-1)%5)==0)
        {
            k=1;
        }
        ll rem = mx/10, md = mx%10;
        if(mx==0)
        {
            cnt = 2*rem;
        }
        else
        {
            cnt = 2*rem;
            if(md>=v2[k])
            {
                cnt+=2;
            }
            else if(md>=v1[k])
            {
                cnt+=1;
            }
        }
        sum+=cnt;
        cnt=0;
        j++;
        if(j==6)
        {
            j==1;
        }
    }
    cout << sum << nl;
    return 0;
}