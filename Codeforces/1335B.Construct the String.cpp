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
#define sz(x) (long long)(x).size()
#define rev(x) reverse(x.begin(), x.end())

const int MOD = 1000000007;
const char nl = '\n';

int X[]={+0,+0,+1,-1,-1,+1,-1,+1};   // King's Moves
int Y[]={-1,+1,+0,+0,+1,+1,-1,-1};  // King's Moves

int KX[]={-2,-2,-1,-1,1,1,2,2};  // Knight's Move
int KY[]={-1,1,-2,2,-2,2,-1,1}; // Knight's Move

ll cell(ll Query_Row, ll Query_Column, ll Column)
{
    ll cell_no = ((Query_Row-1)*Column)+Query_Column;
    return cell_no;
}

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, a, b, i, c=0, d=0, flag=0;
        string s="abcdefghijklmnopqrstuvwxyz";
        cin >> n >> a >> b;

        while(1)
        {
            for(i=0;i<b;i++)
            {
                cout << s[i];
                d++;
                if(d==n)
                {
                    flag = 1;
                    break;
                }
                c++;
                if(c==a)
                {
                    break;
                }
            }
            if(flag==1)
            {
                break;
            }
        }
        cout << nl;
    }
    return 0;
}