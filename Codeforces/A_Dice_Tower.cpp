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

int X[]={+0,+0,+1,-1,-1,+1,-1,+1};   // King's Moves
int Y[]={-1,+1,+0,+0,+1,+1,-1,-1};  // King's Moves

int KX[]={-2,-2,-1,-1,1,1,2,2};  // Knight's Move
int KY[]={-1,1,-2,2,-2,2,-1,1}; // Knight's Move

int main()
{
    fastt;
    ll n;
    cin >> n;
    map <int, int> m;
    m[1] = 6, m[2] = 5, m[3] = 4, m[4] = 3, m[5] = 2, m[6] = 1;
    ll i, j, top, a, b, last, ans=0;
    cin >> top;
    vector <vector<int>> v;
    for(i=0;i<n;i++)
    {
        vector <int> x;
        cin >> a >> b;
        x.pb(a);
        x.pb(m[a]);
        x.pb(b);
        x.pb(m[b]);
        if(i==0)
        {
            x.pb(top);
            x.pb(m[top]);
            v.pb(x);
            last = m[top];
        }
        else
        {
            v.pb(x);
            int f=0;
            for(j=0;j<v[i].size();j++)
            {
                if(last==v[i][j])
                {
                    f = 1;
                }
            }
            if(f==1)
            {
               ans = 1;
               break; 
            }
        }
    }
    if(n==1 || ans==0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}