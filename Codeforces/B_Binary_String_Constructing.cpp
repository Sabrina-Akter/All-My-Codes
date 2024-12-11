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
    ll zero, one, x, cnt = 0, temp = 0;
    cin >> zero >> one >> x;
    string ans;
    char c1 = '0', c2 = '1';
    if(one > zero)
    {
        ans += '1';
        one--;
        cnt++;
    }

    while(1)
    {
        if(zero == 0 && one == 0) break;
        else if(zero == 0 || temp % 2 != 0 && one > 0)
        {
            ans += c2;
            one--;
        }
        else if(one == 0 || temp % 2 == 0 && zero > 0)
        {
            ans += c1;
            zero--;
        }
        temp++;
        cnt++;
        if(cnt == x + 1) break;
    }
    for(int i = 0; i < ans.size(); i++)
    {
        if(ans[i] == '0' && zero > 0) while(zero--) cout << '0';
        if(ans[i] == '1' && one > 0) while(one--) cout << '1';
        cout << ans[i];
    }
    cout << nl;
    return 0;
}