#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define INF 99999999
#define N 100000

void f(ll n,ll i)
{
    if(pow(2,i)==n)
    {
        cout << i << endl;
        return;
    }
    else if(pow(2,i)>n)
    {
        cout << i-1 << endl;
        return;
    }
    else
    {
        return f(n, i+1);
    }
}

int main()
{
    fastt;
    ll n;
    cin >> n;
    f(n, 0);
    return 0;
}
