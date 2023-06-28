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
    ll i, j, n, k, sum, x;
    cin >> n >> k;
    k-=1;
    vll v(n), v2(n);
    for(i=0;i<n;i++)
    {
        sum = 0;
        for(j=0;j<3;j++)
        {
            cin >> x;
            sum+=x;
        }
        v2[i] = sum;
        v[i] = sum;
    }
    sort(all(v));
    reverse(all(v));
    for(i=0;i<n;i++)
    {
        x = v2[i] + 300;
        if(x>=v[k])
        {
            cout << "Yes" << nl;
        }
        else
        {
            cout << "No" << nl;
        }
    }
    return 0;
}