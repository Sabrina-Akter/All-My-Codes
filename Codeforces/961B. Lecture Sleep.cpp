#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll n, k, i, x, MAX=0, ml, mr, num;
    cin >> n >> k;
    ll A[n+5]={0}, X[n+5]={0}, Y[n+5]={0};
    for(i=1;i<=n;i++)
    {
        cin >> A[i];
    }
    for(i=1;i<=n;i++)
    {
        cin >> x;
        if(x==1)
        {
            X[i] = X[i-1]+A[i];
            Y[i] = Y[i-1];
        }
        else
        {
            Y[i] = Y[i-1]+A[i];
            X[i] = X[i-1];
        }
    }
    for(i=k;i<=n;i++)
    {
        num = Y[i]-Y[i-k];
        MAX = max(MAX, num);
    }
    cout << MAX+X[n] << endl;
    return 0;
}
