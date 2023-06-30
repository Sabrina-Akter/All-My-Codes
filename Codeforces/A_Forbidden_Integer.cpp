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
        ll i, target, n, f;
        cin >> target >> n >> f;
        if(f!=1)
        {
            cout << "YES" << nl;
            cout << target << nl;
            for(i=0;i<target;i++)
            {
                cout << 1 << " ";
            }
            cout << nl;
        }
        else
        {
            //EVEN
            if(target%2==0)
            {
                if(n>=2)
                {
                    cout << "YES" << nl;
                    cout << target/2 << nl;
                    for(i=1;i<=target/2;i++)
                    {
                        cout << "2 ";
                    }
                    cout << nl;
                }
                else
                {
                    cout << "NO" << nl;
                }
            }
            //ODD
            else
            {
                if(n>=3 && target!=1)
                {
                    cout << "YES" << nl;
                    int need = (target-3)/2, sum=3;
                    cout << need+1 << nl;
                    cout << "3 ";
                    while(1)
                    {
                        if(sum==target)
                        {
                            break;
                        }
                        cout << 2 << " ";
                        sum+=2;
                    }
                    cout << nl;
                }
                else
                {
                    cout << "NO" << nl;
                }
            }
        }
    }
    return 0;
}