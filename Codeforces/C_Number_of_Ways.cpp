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
    ll i, n, N, sum=0, z1=0, z2=0, Z=0, tsum=0, f1=0, f2=0, f3=0;
    cin >> n;
    vll v(n);
    unordered_map <ll, ll> m;
    for(i=1;i<=1000000;i++)
    {
        sum+=i;
        m[(i-1)] = sum;
        if(sum==99998)
        {
            cout << "i = " << i << nl;
        }
    }
    sum=0;
    for(i=0;i<n;i++)
    {
        cin >> v[i];
        sum+=v[i];
        tsum+=v[i];
        if(tsum==0)
        {
            Z++;
        }
    }
    tsum=0;
    N = sum/3;
    for(i=0;i<n;i++)
    {
        tsum=tsum+v[i];
        if(f1==0 && tsum==N)
        {
            f1=1;
            tsum=0;
        }
        else if(f1==1 && tsum==0)
        {
            z1++;
        }
        else if(f2==0 && f1==1 && tsum==N)
        {
            f2=1;
            tsum=0;
        }
        else if(f2==1 && tsum==0)
        {
            z2++;
        }
        else if(f2==1 && tsum==N)
        {
            f3=1;
        }
    }
    if(sum%3==0)
    {
        if(sum/3==0)
        {
            if(Z>=3)
            {
                cout << m[Z-3] << nl;
            }
            else
            {
                cout << 0 << nl;
            }
        }
        else
        {
            if(f1==1 && f2==1 && f3==1)
            {
                if(z1==0 && z2==0)
                {
                    cout << 1 << nl;
                }
                else if(z1==0 && z2>0)
                {
                    cout << z2+1 << nl;
                }
                else if(z1>0 && z2==0)
                {
                    cout << z1+1 << nl;
                }
                else if(z1>0 && z2>0)
                {
                    cout << (z1+1)*(z2+1) << nl;
                }
            }
            else
            {
                cout << 0 << nl;
            }
        }
    }
    else
    {
        cout << 0 << nl;
    }
    return 0;
}