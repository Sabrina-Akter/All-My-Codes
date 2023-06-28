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

int main()
{
    fastt;
    ll n, x, i, a, k, sum=0, ans;
    cin >> n >> x;
    unordered_map <ll, ll> m;
    for(i=0;i<n;i++)
    {
        cin >> a;
        m[i+1]=a;
    }
    cin >> k;
    for(i=0;i<k;i++)
    {
        cin >> a;
        sum+=m[a];
    }
    ans=x-sum;
    cout << ans+1 << endl;
    return 0;
}
