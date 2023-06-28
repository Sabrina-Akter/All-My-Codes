#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define FOR(i,x) for(ll i=0;i<x;i++)
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll n, i, j, x, sum, ans, pair;
    double p, s;
    while(cin >> n && n!=0)
    {
        ll A[n];
        sum = 0, pair = 0;
        FOR(i,n)
        {
            cin >> A[i];
            x = A[i];
            if(i!=0)
            {
                for(j=i-1;j>=0;j--)
                {
                    if(__gcd(x,A[j])==1)
                    {
                        sum++;
                    }
                    pair++;
                }
            }
        }
        if(sum==0)
        {
            cout << "No estimate for this data set." << endl;
        }
        else
        {
            p = pair, s = sum;
            double ans = ((6*p)/s);
            cout << fixed << setprecision(6) << sqrt(ans) << endl;
        }
    }
    return 0;
}
