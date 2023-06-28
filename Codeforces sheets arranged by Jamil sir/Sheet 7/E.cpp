#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define INF 99999999
#define N 100000

void binary(ll n)
{
    if(n/2>0)
    {
        binary(n/2);
    }
    cout << (n%2);
}

int main()
{
    fastt;
    ll n, t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        binary(n);
        cout << endl;
    }
    return 0;
}
