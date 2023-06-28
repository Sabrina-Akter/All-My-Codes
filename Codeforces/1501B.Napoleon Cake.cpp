#include <bits/stdc++.h>
using namespace std;

#define fastt                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long int
#define vll vector<ll>
#define pb push_back
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ms(x) memset(x, 0, sizeof x)
#define sz(x) (long long)(x).size()

const int MOD = 1000000007;
const char nl = '\n';

int X[] = {+0, +0, +1, -1, -1, +1, -1, +1}; // King's Moves
int Y[] = {-1, +1, +0, +0, +1, +1, -1, -1}; // King's Moves

int KX[] = {-2, -2, -1, -1, 1, 1, 2, 2}; // Knight's Move
int KY[] = {-1, 1, -2, 2, -2, 2, -1, 1}; // Knight's Move

ll cell(ll Query_Row, ll Query_Column, ll Column)
{
    ll cell_no = ((Query_Row - 1) * Column) + Query_Column;
    return cell_no;
}

const int maxn = 5e5 + 7;
int a[maxn], mark[maxn];

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
		int n;
		cin >> n;
 
		for(int i = 1; i <= n; i++)
			cin >> a[i], mark[i] = 0;
 
		for(int i = 1;i <= n; i++)
		{
			if(a[i] == 0)
				continue;
 
			int r = i;
			int l = max(i - a[i] + 1, 1);
 
			mark[l]++;
			mark[r + 1]--;
		}
 
		for(int i = 1; i <= n; i++)
			mark[i] += mark[i - 1];
 
		for(int i = 1; i <= n; i++)
			cout << (mark[i] != 0) << " ";
		cout << "\n";
    }
    return 0;
}