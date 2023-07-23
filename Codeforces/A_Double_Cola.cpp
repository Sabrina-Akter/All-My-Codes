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
    ll n, num=1, prod=5, t=100, sum=0, last=sum, ind=1, ans;
    map <int, string> m;
    m[1] = "Sheldon", m[2] = "Leonard", m[3] = "Penny", m[4] = "Rajesh", m[5] = "Howard";
    cin >> n;
    while(t--)
    {
        sum+=prod;
        if(n<=sum && n>=last+1)
        {
            ans = (n-last)/ind;
            if((n-last)%ind!=0)
            {
                ans++;
            }
            cout << m[ans] << nl;
            break;
        }
        last = sum;
        prod*=2;
        ind*=2;
    }
    return 0;
}