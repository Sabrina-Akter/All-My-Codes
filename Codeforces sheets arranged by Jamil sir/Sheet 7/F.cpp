#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define INF 99999999
#define N 100000

void Even(ll *A, ll n)
{
    if(n<0)
    {
        return;
    }
    if(n%2==0)
    {
        cout << A[n] << " ";
    }
    return Even(A, n-1);
}

int main()
{
    fastt;
    ll n, i;
    cin >> n;
    ll A[n];
    for(i=0;i<n;i++)
    {
        cin >> A[i];
    }
    Even(A, n-1);
    return 0;
}
