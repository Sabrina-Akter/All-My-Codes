#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
//#define N 100000

int main()
{
    fastt;
    ll n, k, i, j, sum=0, p;
    cin >> n >> k;
    for(i=1;i<=n;i++)
    {
        p = 100*i;
        for(j=1;j<=k;j++)
        {
            sum = sum + (p+j);
        }
    }
    cout << sum << endl;
    return 0;
}
