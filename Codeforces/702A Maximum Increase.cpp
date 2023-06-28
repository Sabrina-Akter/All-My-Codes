#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll i, n, sum = 1;
    vector <ll> v;
    cin >> n;
    ll ar[n+1];
    ar[n] = 0;
    for(i=0;i<=n;i++)
    {
        if(i!=n)
        {
            cin >> ar[i];
        }
        if(i!=0)
        {
            if(ar[i]>ar[i-1])
            {
                sum++;
            }
            else
            {
                v.push_back(sum);
                sum = 1;
            }
        }
    }
    sort(v.begin(), v.end());
    ll s = v.size();
    cout << v[s-1] << endl;
    return 0;
}
