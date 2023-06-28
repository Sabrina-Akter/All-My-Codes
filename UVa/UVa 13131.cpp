#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int

int main()
{
    fastt;
    ll t, n, k, i, sum, N;
    cin >> t;
    while(t--)
    {
        sum = 0;
        cin >> n >> k;
        if(k==1)
        {
            cout << 0 << endl;
        }
        else
        {
            for(i=1; i<=sqrt(n); i++)
            {
                if(n%i==0)
                {
                    N = n/i;
                    if(i%k==0 && N%k==0)
                    {
                        continue;
                    }
                    else if(i%k==0)
                    {
                        sum+=N;
                    }
                    else if(N%k==0)
                    {
                        sum+=i;
                    }
                    else if(N==i)
                    {
                        sum+=i;
                    }
                    else
                    {
                        sum+=i+N;
                    }
                }
            }
            cout << sum << endl;
        }
    }
    return 0;
}
