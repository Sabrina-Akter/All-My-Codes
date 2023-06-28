#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define INF 99999999
#define N 100000

void f(ll *A, ll n, double sum, ll X)
{
    if(n==0)
    {
        cout << fixed << setprecision(6) << sum/X << endl;
        return;
    }
    else
    {
        f(A, n-1, sum+A[n-1], X);
    }
}

int main()
{
    fastt;
    ll n, i;
    double sum=0;
    cin >> n;
    ll A[n];
    for(i=0;i<n;i++)
    {
        cin >> A[i];
    }
    f(A, n, 0, n);
    return 0;
}
