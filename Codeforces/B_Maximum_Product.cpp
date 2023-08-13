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

int X[]={+0,+0,+1,-1,-1,+1,-1,+1};   // L, R, D, U, TR, BR, TL, BL
int Y[]={-1,+1,+0,+0,+1,+1,-1,-1};  //

int KX[]={-2,-2,-1,-1,1,1,2,2};  // Knight's Move
int KY[]={-1,1,-2,2,-2,2,-1,1}; // Knight's Move

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, i, x, zero=0, mx=LONG_LONG_MIN, prod;
        vll pos, neg, neg_rev;
        cin >> n;
        for(i=0;i<n;i++)
        {
            cin >> x;
            if(x==0)
            {
                zero++;
            }
            else if(x>0)
            {
                pos.push_back(x);
            }
            else if(x<0)
            {
                neg.push_back(x);
            }
        }
        sort(all(pos), greater<ll>());
        sort(all(neg));
        neg_rev = neg;
        reverse(all(neg_rev));
        //For 5 positives, 0 negative
        if(pos.size()>=5)
        {
            prod = pos[0]*pos[1]*pos[2]*pos[3]*pos[4];
            mx = max(mx, prod);
        }
        //For 4 positives, 1 negatives
        if(pos.size()>=4 && neg_rev.size()>=1)
        {
            prod = pos[0]*pos[1]*pos[2]*pos[3]*neg_rev[0];
            mx = max(mx, prod);
        }
        //For 3 positives, 2 negatives
        if(pos.size()>=3 && neg.size()>=2)
        {
            prod = pos[0]*pos[1]*pos[2]*neg[0]*neg[1];
            mx = max(mx, prod);
        }
        //For 2 positives, 3 negatives
        if(pos.size()>=2 && neg_rev.size()>=3)
        {
            prod = pos[0]*pos[1]*neg_rev[0]*neg_rev[1]*neg_rev[2];
            mx = max(mx, prod);
        }
        //For 1 positive, 4 negatives
        if(pos.size()>=1 && neg.size()>=4)
        {
            prod = pos[0]*neg[0]*neg[1]*neg[2]*neg[3];
            mx = max(mx, prod);
        }      
        //For 0 positive, 5 negatives
        if(neg_rev.size()>=5)
        {
            prod = neg_rev[0]*neg_rev[1]*neg_rev[2]*neg_rev[3]*neg_rev[4];
            mx = max(mx, prod);
        }
        if(mx>0)
        {
            cout << mx << nl;
        }
        else
        {
            if(zero>0)
            {
                cout << 0 << nl;
            }
            else
            {
                cout << mx << nl;
            }
        }
    }
    return 0;
}