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
    ll n, i, sum1, sum2=0, x;
    cin >> n;
    sum1 = (n*(n+1))/2;
    for(i=0;i<n-1;i++)
    {
        cin >> x;
        sum2 = sum2+x;
    }
    cout << sum1-sum2 << endl;
    return 0;
}
