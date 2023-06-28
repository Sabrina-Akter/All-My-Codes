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
        ll n, i, mx=-1, L, R;
        cin >> n;
        vll v(n);
        for(i=0;i<n;i++)
        {
            cin >> v[i];
            mx = max(mx, v[i]);
        }
        if(v[0]==mx || v[n-1]==mx)
        {
            deque <ll> a;
            a.push_back(mx);
            if(v[0]==mx)
            {
                L = 1;
                R = n-1;
            }
            else if(v[n-1]==mx)
            {
                L = 0;
                R = n-2;
            }
            while(1)
            {
                if(a.size()==n)
                {
                    break;
                }
                if(v[L]<=v[R])
                {
                    a.push_front(v[L]);
                    L++;
                }
                else
                {
                    a.push_back(v[R]);
                    R--;
                }
            }
            for(i=0;i<a.size();i++)
            {
                cout << a[i] << " ";
            }
            cout << nl;
        }
        else
        {
            cout << -1 << nl;
        }
    }
    return 0;
}