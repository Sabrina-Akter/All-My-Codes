#include <bits/stdc++.h>
#define mx 1000000000000
#define max 1000007
#define ll long long int
using namespace std;
vector<ll> primes;
vector<ll>primes1;
ll X=0, N, nn;

void sieve()
{
    ll flag=0;
    bool isprime[max + 1];
    for (ll i = 0; i <= max; i++) {
        isprime[i] = true;
    }
    isprime[0] = false;
    isprime[1] = false;
    for (ll i = 3; i * i <= (max); i = i + 2) {
        if (isprime[i]) {
            for (ll j = i * i; j <= max; j = j + i) {
                isprime[j] = false;
            }
        }
    }
    for (ll i = 3; i < max; i = i + 2) {
        if(i>nn)
        {
            flag = 1;
        }
        else if(isprime[i])
        {
            primes.push_back(i);
            if(i==nn)
            {
                flag=1;
            }
        }
        if(flag==1)
        {
            break;
        }
    }
}
int main()
{
    primes.push_back(2);
    ll n, d, b, i, flag, x, t, j, k;
    cin >> n >> k;
    if(n==2)
    {
        cout << 2 << endl;
    }
    else
    {
        nn = n;
        sieve();
        X = primes.size();
        N = X-k;
        if(N<0)
        {
            N = 0;
        }
        ll cc = 0;
        for (i = N; i<X; i++)
        {
            cout << primes[i] << " ";
            cc++;
        }
        cout << endl;
    }
    return 0;
}
