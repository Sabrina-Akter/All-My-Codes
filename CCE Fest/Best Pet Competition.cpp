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
    ll c, d, v, i;
    cin >> c >> d >> v;
    ll cat_lover[c+10], cat_hater[c+10], dog_lover[d+10], dog_hater[d+10];
    for(i=0;i<c+10;i++)
    {
        cat_lover[i] = 0;
        cat_hater[i] = 0;
    }
    for(i=0;i<d+10;i++)
    {
        dog_lover[i] = 0;
        dog_hater[i] = 0;
    }
    char c1, c2;
    ll n1, n2, mx=0;
    for(i=0;i<v;i++)
    {
        cin >> c1 >> n1 >> c2 >> n2;
        if(c1=='C')
        {//Cat Lover
            cat_lover[n1]++;
        }
        else
        {//Dog Hater
            dog_hater[n1]++;
        }
        if(c2=='C')
        {//Dog Lover
            dog_lover[n2]++;
        }
        else
        {//Cat Hater
            cat_hater[n2]++;
        }
    }
    for(i=0;i<c+10;i++)
    {
        mx = max(mx, cat_lover[i]);
        mx = max(mx, cat_hater[i]);
    }
    for(i=0;i<d+10;i++)
    {
        mx = max(mx, dog_lover[i]);
        mx = max(mx, dog_hater[i]);
    }
    cout << mx << endl;
    return 0;
}