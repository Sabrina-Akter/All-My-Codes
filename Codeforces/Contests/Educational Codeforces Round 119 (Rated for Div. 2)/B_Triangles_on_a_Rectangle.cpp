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
        ll i, w, h;
        cin >> w >> h;
        ll p1, p2, p3, p4;
        cin >> p1;
        vll v1(p1);
        for(i=0;i<p1;i++)
        {
            cin >> v1[i];
        }
        cin >> p2;
        vll v2(p2);
        for(i=0;i<p2;i++)
        {
            cin >> v2[i];
        }
        cin >> p3;
        vll v3(p3);
        for(i=0;i<p3;i++)
        {
            cin >> v3[i];
        }
        cin >> p4;
        vll v4(p4);
        for(i=0;i<p4;i++)
        {
            cin >> v4[i];
        }
        cout << max((max((v1[p1-1]-v1[0]),(v2[p2-1]-v2[0])))*h, (max((v3[p3-1]-v3[0]),(v4[p4-1]-v4[0])))*w) << nl;
    }
    return 0;
}