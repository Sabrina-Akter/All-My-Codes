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
        ll n, i, f=0, c=1;
        cin >> n;
        vll v(n);
        for(i=0;i<n;i++)
        {
            cin >> v[i];
        }
        for(i=0;i<n;i++)
        {
            if(v[i]==0 && v[i+1]==0)
            {
                f=1;
                break;
            }
            else if((v[i]==1 && v[i-1]==1) && (i>=1))
            {
                c+=5;
            }
            else if(v[i]==1)
            {
                c+=1;
            }
        }
        if(f==1)
        {
            cout << -1 << nl;
        }
        else
        {
            cout << c << nl;
        }
    }
    return 0;
}