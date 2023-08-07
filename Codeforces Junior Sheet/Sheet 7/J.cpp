#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define INF 99999999
#define N 100000

ll fact(ll n)
{
    if(n==1)
        return n;
    return n*fact(n-1);
}

int main()
{
    fastt;
    ll n;
    cin >> n;
    cout << fact(n);
    return 0;
}
