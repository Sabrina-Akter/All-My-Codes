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

int X[]={+0,+0,+1,-1,-1,+1,-1,+1};   // King's Moves
int Y[]={-1,+1,+0,+0,+1,+1,-1,-1};  // King's Moves

int KX[]={-2,-2,-1,-1,1,1,2,2};  // Knight's Move
int KY[]={-1,1,-2,2,-2,2,-1,1}; // Knight's Move

int main()
{
    fastt;
    int t;
    double u, v, w, U, V, W;
	cin >> t;
	while (t--) {
		cin >> w >> v >> u >> U >> V >> W;
		double X = (w - U + v) * (U + v + w);
		double x = (U - v + w) * (v - w + U);
		double Y = (u - V + w) * (V + w + u);
		double y = (V - w + u) * (w - u + V);
		double Z = (v - W + u) * (W + u + v);
		double z = (W - u + v) * (u - v + W);
		double a = sqrt(x * Y * Z);
		double b = sqrt(X * y * Z);
		double c = sqrt(X * Y * z);
		double d = sqrt(x * y * z);
		double ans = -a + b + c + d;
		ans *= a - b + c + d;
		ans *= a + b - c + d;
		ans *= a + b + c - d;
		ans = sqrt(ans) / (192.0 * u * v * w);
		cout << fixed << setprecision(4) << ans << endl;
	}
    return 0;
}