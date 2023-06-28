#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define INF 99999999
#define N 100000

int main()
{
    fastt;
    ll n, q, i, sum=0, j, b, c, B=0, C, MAX=0, prod;
    vector <ll> v;
    cin >> n >> q;
    ll A[n];
    for(i=0;i<n;i++)
    {
        cin >> A[i];
    }
    sort(A,A+n);
    for(i=0;i<q;i++)
    {
        cin >> b >> c;
        prod=b*c;
        if(prod>MAX)
        {
            MAX = prod;
            B = b, C = c;
        }
    }
    for(i=B;i<n;i++)
    {
        sum = sum+A[i];
    }
    cout << sum+MAX << endl;
    return 0;
}
