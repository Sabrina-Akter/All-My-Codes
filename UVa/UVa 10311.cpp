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
	ll i, n = 100000000;
	segmentedSieve(n);
	ll N, flag;
    while(cin>>N)
    {
        flag=0;
        ll X, Y;
        if(N%2!=0)
        {
            ll m=N-2;
            ll c1=count(PRIME.begin(),PRIME.end(),m);
            if((c1==1) && (2!=m))
            {
                cout << N << " is the sum of 2 and " << m << "." << endl;
            }
            else
            {
                cout << N << " is not the sum of two primes!" << endl;
            }
        }
        else
        {
            for(i=(N/2); i>=2; i--)
            {
                ll c1=count(PRIME.begin(),PRIME.end(),i);
                if(c1==1)
                {
                    ll m=N-i;
                    ll c2=count(PRIME.begin(),PRIME.end(),m);
                    if((c2==1) && (i!=m))
                    {
                        flag=1;
                        if(flag==1)
                        {
                            X=i, Y=m;
                            cout << N << " is the sum of " << X << " and " << Y << "." << endl;
                            break;
                        }
                    }
                }
            }
            if(flag==0)
            {
                cout << N << " is not the sum of two primes!" << endl;
            }
        }
    }
	return 0;
}
