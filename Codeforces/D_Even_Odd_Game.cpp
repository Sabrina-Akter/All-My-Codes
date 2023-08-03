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
#define pll pair<ll, ll>
#define plll pair<pll, ll>

const int MOD = 1000000007;
const char nl = '\n';

int X[] = {+0, +0, +1, -1, -1, +1, -1, +1}; // L, R, D, U, TR, BR, TL, BL
int Y[] = {-1, +1, +0, +0, +1, +1, -1, -1}; //

int KX[] = {-2, -2, -1, -1, 1, 1, 2, 2}; // Knight's Move
int KY[] = {-1, 1, -2, 2, -2, 2, -1, 1}; // Knight's Move

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        int n,cnt=1;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        ll sum=0;
        for(int i=n-1;i>=0;i--)
        {
            if(cnt)
            {
                if(arr[i]%2==0)
                {
                    sum += arr[i];
                }
            }
            else
            {
                if(arr[i]%2)
                {
                    sum -= arr[i];
                }
            }
            cnt ^= 1;
        }
        if(sum>0)
        {
            cout<<"Alice";
        }
        else if(sum<0)
        {
            cout<<"Bob";
        }
        else
        {
            cout<<"Tie";
        }
        cout << nl;
    }
    return 0;
}