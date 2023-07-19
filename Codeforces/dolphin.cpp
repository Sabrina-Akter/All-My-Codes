#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int

int main()
{
    fastt;
    ll p, i;
    cin >> p;

    vector<ll> arr(p, -1);

    for (i = 0; i <= p / 2; i++) 
    {
        ll index = (i * i) % p;
        ll value = i;
        if(arr[index]==-1)
        {
            arr[index] = value;
        }
    }

    for(i=0;i<p;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}