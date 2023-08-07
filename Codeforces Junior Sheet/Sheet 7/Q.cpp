#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define INF 99999999
#define N 100000

void f(ll n,ll c)
{
    if(n==1)
    {
        cout << c << endl;
        return;
    }
    else if(n%2==0)
    {
        return f(n/2, c+1);
    }
    else if(n%2!=0)
    {
        return f(((3*n)+1), c+1);
    }
}

int main()
{
    fastt;
    ll n, c=1;
    cin >> n;
    f(n, c);
    return 0;
}
