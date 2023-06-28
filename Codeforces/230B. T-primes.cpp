#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back


bool prime[1000001];
void SieveOfEratosthenes(ll n)
{
	memset(prime, true, sizeof(prime));

	for (ll p = 2; p * p <= n; p++)
	{
		if (prime[p] == true)
		{
			for (ll i = p * p; i <= n; i += p)
				prime[i] = false;
		}
	}
}

int main()
{
	fastt;
	SieveOfEratosthenes(1000000);
	ll i, t, n;
	cin >> t;
	while(t--)
    {
        cin >> n;
        if(n==1||n==2||n==3)
        {
            cout << "NO" << endl;
            continue;
        }
        else if(n==4)
        {
            cout << "YES" << endl;
        }
        else if((n%2==0)&&(n>4))
        {
            cout << "NO" << endl;
            continue;
        }
        else if(n%2!=0)
        {
            ll N = sqrt(n);
            double NN = sqrt(n);
            if(N==NN)
            {
                if(prime[N])
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
	return 0;
}

