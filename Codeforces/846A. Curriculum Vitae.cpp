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

int main()
{
    fastt;
    ll n, i, one=0, zero=0, mx, first_one=0, last_one=0, flag1=0, flag2=0, p=0;
    cin >> n;
    vll v(n);
    for(i=0;i<n;i++)
    {
        cin >> v[i];
        if(v[i]==0)
        {
            zero++;
        }
        else
        {
            one++;
        }
        if(flag1==0)
        {
            if(v[i]==1)
            {
                first_one++;
            }
            else
            {
                flag1=1;
                p=i;
            }
        }
    }
    for(i=n-1;i>i;i--)
    {
        if(flag2==0)
        {
            if(v[i]==1)
            {
                last_one++;
            }
            else
            {
                flag2=1;
                break;
            }
        }
    }
    zero+=first_one+last_one;
    cout << "One = " << one << endl;
    cout << "Zero = " << zero << endl;
    return 0;
}
