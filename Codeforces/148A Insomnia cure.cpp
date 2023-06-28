#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll k, l, m, n, d, i, sum=0;
    cin >> k >> l >> m >> n >> d;
    vector <ll> v((d+1),0);
    for(i=1;i<=d;i++)
    {
        if((i*k)<=d)
        {
            v[i*k] = 1;
        }
        if((i*l)<=d)
        {
            v[i*l] = 1;
        }
        if((i*m)<=d)
        {
            v[i*m] = 1;
        }
        if((i*n)<=d)
        {
            v[i*n] = 1;
        }

        if(v[i]==0)
        {
            sum = sum+1;
        }
    }
    cout << d-sum << endl;
    return 0;
}
