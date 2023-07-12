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

int f(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        f(n-1);
        cout << "I love Recursion" << nl;
    }
    return 0;
}

int main()
{
    fastt;
    ll n;
    cin >> n;
    f(n);
    return 0;
}