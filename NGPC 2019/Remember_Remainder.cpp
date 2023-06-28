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
    ll n, r, i, sum=0, k, B;
    double a, b, c;
    cin >> n >> k;
    r = n%k;
    // cout << "r = " << r << nl;
    vll v(n);
    for(i=0;i<n;i++)
    {
        cin >> v[i];
        if(v[i]%k==r)
        {
            continue;
        }
        else
        {
            // cout << "v[" << i << "] = " << r << nl;
            a = v[i]%k;
            c = v[i];
            b = c/k;
            B = v[i]/k;
            // cout << "a = " << a << nl;
            // cout << "b = " << b << nl;
            // cout << "B = " << B << nl;
            if(a<r)
            {
                sum+=(r-a);
            }
            else
            {
                if(b!=B)
                {
                    B++;
                }
                // cout << "B = " << B << nl;
                sum+=((k*B)-v[i])+r;
            }
        }
    }
    cout << sum << nl;
    return 0;
}