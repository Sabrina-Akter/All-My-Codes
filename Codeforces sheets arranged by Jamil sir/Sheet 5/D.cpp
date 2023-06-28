#include <bits/stdc++.h>
using namespace std;

map <long long, long long> mp;

void simpleSieve(long long limit, vector<long long> &prime)
{
	vector<bool> mark(limit + 1, true);

	for (long long p=2; p*p<limit; p++)
	{
		if (mark[p] == true)
		{
			for (int i=p*p; i<limit; i+=p)
				mark[i] = false;
		}
	}
	for (long long p=2; p<limit; p++)
	{
		if (mark[p] == true)
		{
			prime.push_back(p);
			mp[p] = 1;
		}
	}
}
void segmentedSieve(long long n)
{
	long long limit = floor(sqrt(n))+1;
	vector<long long> prime;
	prime.reserve(limit);
	simpleSieve(limit, prime);
	long long low = limit;
	long long high = 2*limit;
	while (low < n)
	{
		if (high >= n)
		high = n;
		bool mark[limit+1];
		memset(mark, true, sizeof(mark));
		for (long long i = 0; i < prime.size(); i++)
		{
			long long loLim = floor(low/prime[i]) * prime[i];
			if (loLim < low)
				loLim += prime[i];

			for (long long j=loLim; j<high; j+=prime[i])
				mark[j-low] = false;
		}
		for (long long i = low; i<high; i++)
			if (mark[i - low] == true)
            {
                mp[i]=1;
            }
		low = low + limit;
		high = high + limit;
	}
}

int main()
{
	long long t, x, n = 1000000000;
	segmentedSieve(n);
	cin >> t;
	while(t--)
    {
        cin >> x;
        if(mp[x]==1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
	return 0;
}


