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
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, i, j, k, x, flag=0;
        cin >> n;
        vll v[6];
        for(i=0;i<n;i++)
        {
            for(j=0;j<5;j++)
            {
                cin >> x;
                if(x==1)
                {
                    v[j+1].pb(i+1);
                }
            }
        }
        for(i=1;i<=5;i++)
        {
            for(j=i+1;j<=5;j++)
            {
                set <ll> s;
                for(k=0;k<v[i].size();k++)
                {
                    s.insert(v[i][k]);
                }
                for(k=0;k<v[j].size();k++)
                {
                    s.insert(v[j][k]);
                }
                if((v[i].size()>=(n/2)) && (v[j].size()>=(n/2)) && (s.size()>=n))
                {
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
            cout << "YES" << nl;
        }
        else
        {
            cout << "NO" << nl;
        }
    }
    return 0;
}