#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <long long int>
#define pb push_back
#define nl endl

ll printNcR(ll n, ll r)
{
	long long p = 1, k = 1;
	if (n - r < r)
		r = n - r;

	if (r != 0) {
		while (r) {
			p *= n;
			k *= r;
			long long m = __gcd(p, k);
			p /= m;
			k /= m;

			n--;
			r--;
		}
	}

	else
	p = 1;
	return p;
}

int main()
{
    fastt;
    ll i, n, q, e=0, o=0, x, y, p, odd;
    cin >> n >> q;
    vll v(n);
    for(i=0;i<n;i++)
    {
        cin >> v[i];
        if(v[i]%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    for(i=0;i<q;i++)
    {
        ll sum = 0;
        cin >> x >> y;
        x--;
        if(y%2!=0 && v[x]%2==0)
        {
            e--;
            o++;
        }
        else if(y%2==0 && v[x]%2!=0)
        {
            e++;
            o--;
        }
        v[x] = y;
        odd = o;
        if(odd%2==0)
        {
            odd--;
        }
        for(i=odd;i>=1;i--)
        {
            
            i--;
        }
    }
    return 0;
}