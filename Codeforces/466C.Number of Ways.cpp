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
    ll i, n, sum=0, ans=0, zero=0, av, sm=0;
    cin >> n;
    vll v(n);
    for(i=0;i<n;i++)
    {
        cin >> v[i];
        sum+=v[i];
        if(v[i]==0)
        {
            zero++;
        }
    }
    av = sum/3;
    if((n>=3) && (sum%3==0))
    {
        for(i=0;i<n;i++)
        {
            sm+=v[i];
            if(sm==av)
            {
                sm=0;
                ans++;
            }
        }
        if(ans>=3)
        {
            if(av==0)
            {
                cout << ans-2 << nl;
            }
            else
            {
                ans=ans-2;
                ans=ans+zero;
                cout << ans << nl;
            }
        }
        else
        {
            cout << 0 << nl;
        }
    }
    else
    {
        cout << 0 << nl;
    }
    return 0;
}


