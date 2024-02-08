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
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        ll last = -1, first = -1;
        for(ll i = s.size() - 1; i >= 0; i--)
        {
            if(s[i] == '1')
            {
                last = i;
                break;
            }
        }
        for(ll i = 0; i < s.size(); i++)
        {
            if(s[i] == '1')
            {
                first = i;
                break;
            }
        }
        bool last_swap = false;
        if(s.size() - 1 - last <= k && last != -1)
        {
            swap(s[last], s[s.size() - 1]);
            k -= s.size() - 1 - last;
            last_swap = true;
        }
        if(first != last && first <= k && first != -1) 
        {
            swap(s[first], s[0]);
        }
        else if(first == last && first <= k && last_swap == false && first != -1)
        {
            swap(s[first], s[0]);
        }
        ll sum = 0, num;
        string temp;
        for(int i = 1; i < s.size(); i++)
        {
            temp += s[i - 1];
            temp += s[i];
            num = stoll(temp);
            sum += num;
            temp = "";
        }
        cout << sum << nl;
    }
    return 0;
}