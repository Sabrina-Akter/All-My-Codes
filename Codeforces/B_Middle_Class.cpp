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

double arr[100005];

int main()
{
    fastt;
    int t,pos,n,x,i,ans;
    double sum,avg;
    cin >> t;

    while(t--) 
    {
        cin >> n >> x;
        for (i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        sort (arr,arr+n);
        sum = avg = 0.0;
        ans = 0;
        for (i=n-1; i>=0; i--) 
        {
            sum += arr[i];
            avg = sum/(double(n-i));
            if (avg >= x) ++ans;
            else break;
        }
        cout << ans << nl;
    }    
    return 0;
}