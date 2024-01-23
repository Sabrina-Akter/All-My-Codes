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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        vector <ll> sheep;
        for(ll i = 0; i < n; i++)
        {
            if(s[i] == '*') sheep.pb(i);
        }
        ll total = sheep.size();
        if(total == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            ll mid_index = total / 2;
            ll mid = sheep[mid_index];
            ll sum = 0;
            ll left_need = mid - 1;
            ll left = mid_index - 1;
            ll right = mid_index + 1;
            ll right_need = mid + 1;
            //left
            while(left >= 0)
            {
                sum += left_need - sheep[left];
                left_need--;
                left--;
            }
            //right
            while(right < total)
            {               
                sum += sheep[right] - right_need;
                right_need++;
                right++;
            }
            cout << sum << endl;
        }
    }
    return 0;
}