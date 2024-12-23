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
    ll trees, need, i;
    cin >> trees >> need;
    vll v(trees);
    for(i=0;i<trees;i++)
    {
        cin >> v[i];
    }
    ll left = 0, right = *max_element(all(v)) , mid, ans;
    while(left<right)
    {
        double L = left, R = right, check;
        check = (L+R)/2;
        mid = (left+right)/2;
        if(mid!=check)
        {
            mid++;
        }
        ll sum=0;
        for(i=0;i<trees;i++)
        {
            if(v[i]>mid)
            {
                sum+=(v[i]-mid);
            }
        }
        if(sum==need)
        {
            ans = mid;
            break;
        }
        else if(sum>need)
        {
            left = mid;
            ans = left;
        }
        else if(sum<need)
        {
            right = mid-1;
        }
    }
    cout << ans << nl;
    return 0;
}