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

const int MOD = 1000000007;
const char nl = '\n';

int X[]={+0,+0,+1,-1,-1,+1,-1,+1};   // King's Moves
int Y[]={-1,+1,+0,+0,+1,+1,-1,-1};  // King's Moves

int KX[]={-2,-2,-1,-1,1,1,2,2};  // Knight's Move
int KY[]={-1,1,-2,2,-2,2,-1,1}; // Knight's Move

int main()
{
    fastt;
    ll i, n, t, z=0, f=0, num=0;
    cin >> n >> t;
    ll A[n+2];
    ms(A);
    while(t--)
    {
        ll a, b;
        cin >> a >> b;
        if(a==b)
        {
            continue;
        }
        if(a%2==0)
        {
            a--;
        }
        b--;
        if(b%2!=0)
        {
            b++;
        }
        A[a]=1;
        A[b+1]=-1;
    }
    for(i=2;i<=n+1;i++)
    {
        A[i] = A[i]+A[i-1];
    }
    for(i=1;i<=n;i++)
    {
        if(A[i]<=0)
        {
            if(f==0)
            {
                cout << i << " ";
                f=1;
                num++;
            }
            z++;
        }
        else
        {
            if(f==1)
            {
                cout << i << nl;
                f=0;
                num++;
            }
        }
    }
    if(z==0)
    {
        cout << "Sheldon ate it all !!!" << nl;
    }
    else 
    {
        if(num%2!=0)
        {
            cout << n+1 << nl;
        } 
    }
    return 0;
}