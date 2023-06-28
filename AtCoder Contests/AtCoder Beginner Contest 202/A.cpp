#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define N 100000

int main()
{
    fastt;
    ll A[7] = {0,6,5,4,3,2,1};
    ll sum=0, n;
    for(ll i=0;i<3;i++)
    {
        cin >> n;
        sum+=A[n];
    }
    cout << sum << endl;
    return 0;
}
