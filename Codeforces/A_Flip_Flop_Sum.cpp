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
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, i, f1=0, f2=0, f3=0, pos=0, neg=0;
        cin >> n;
        vll v(n);
        for(i=0;i<n;i++)
        {
            cin >> v[i];
            if(v[i]>0)
            {
                pos++;
            }
            else
            {
                neg++;
            }
            if(i!=0)
            {
                if(v[i]==-1 && v[i-1]==-1)
                {
                    f1=1;
                }
                else if(v[i]==1 && v[i-1]==1)
                {
                    f3=1;
                }
                else
                {
                    f2=1;
                }
            }
        }
        if(f1==1)
        {
            pos+=2;
            neg-=2;
        }
        else if(f2==1)
        {
           //okay 
        }
        else if(f3==1)
        {
            pos-=2;
            neg+=2;
        }
        cout << pos-neg << nl;
    }
    return 0;
}