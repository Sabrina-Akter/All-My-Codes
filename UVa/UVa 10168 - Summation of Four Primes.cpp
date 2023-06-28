#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

bool prime[5000001];
ll n = 5000001;
ll N, one, two, three, four, half, i, sum;
void SieveOfEratosthenes()
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
    SieveOfEratosthenes();
    while(cin>>N)
    {
        ll flag1=0, flag2=0;
        sum=0;
        if((N<8))
        {
            cout << "Impossible." << endl;
        }
        else
        {
            ///1,2
            half = N/2;
            if(prime[half]==1)
            {
                one = half;
                flag1=1;
            }
            for(i=half-1;;i--)
            {
                if(flag1==0 && prime[i]==1)
                {
                    one = i;
                    flag1=1;
                }
                else if(flag1==1 && prime[i]==1)
                {
                    two = i;
                    flag2=1;
                }
                if(flag1==1 && flag2==1)
                {
                    break;
                }
            }
            sum=one+two;
            three = (N-sum)/2, four = three;
            cout << one << " " << two << " " << three << " " << four << endl;
        }
    }
    return 0;
}
