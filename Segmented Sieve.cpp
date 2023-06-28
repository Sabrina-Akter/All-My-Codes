#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

vll PRIME;

void simpleSieve(ll limit, vector<ll> &prime)
{
	vector<bool> mark(limit + 1, true);

	for (ll p=2; p*p<limit; p++)
	{
		if (mark[p] == true)
		{
			for (ll i=p*p; i<limit; i+=p)
				mark[i] = false;
		}
	}
	for (ll p=2; p<limit; p++)
	{
		if (mark[p] == true)
		{
			prime.push_back(p);
			PRIME.pb(p);
		}
	}
}

void segmentedSieve(ll n)
{
	ll limit = floor(sqrt(n))+1;
	vector<ll> prime;
	prime.reserve(limit);
	simpleSieve(limit, prime);
	ll low = limit;
	ll high = 2*limit;

	while (low < n)
	{
		if (high >= n)
		high = n;
		bool mark[limit+1];
		memset(mark, true, sizeof(mark));

		for (ll i = 0; i < prime.size(); i++)
		{
			ll loLim = floor(low/prime[i]) * prime[i];
			if (loLim < low)
				loLim += prime[i];
			for (ll j=loLim; j<high; j+=prime[i])
				mark[j-low] = false;
		}

		for (ll i = low; i<high; i++)
			if (mark[i - low] == true)
				PRIME.pb(i);

		low = low + limit;
		high = high + limit;
	}
}

int main()
{
	fastt;
	ll n = 1000000;
	segmentedSieve(n);
	return 0;
}

