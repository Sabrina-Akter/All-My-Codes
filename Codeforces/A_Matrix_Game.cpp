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

int n, m;
int a[51][51];

int main()
{
    fastt;
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n >> m;
		set< int > r, c;
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= m; j++)
			{
				cin >> a[i][j];
				if(a[i][j] == 1)
					r.insert(i), c.insert(j);
			}
		}
        int r_size = n-r.size(), c_cize = m-c.size();
		int mn = min(r_size, c_cize);
		if(mn % 2)
			cout << "Ashish" << endl;
		else
			cout << "Vivek" << endl;
	}
	return 0;    
}