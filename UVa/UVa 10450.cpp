#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int

ll A[60];

ll fib(ll N)
{
    if(N==0 || N==1)
    {
        A[N] = N;
        return A[N];
    }
    if(A[N]!=-1)
    {
        return A[N];
    }
    else
    {
        A[N] = fib(N-1) + fib(N-2);
        return A[N];
    }
}

int main()
{
    fastt;
    fill(A, A+60, -1);
    ll n, t, s=0;
    cin >> t;
    while(t--)
    {
        s++;
        cin >> n;
        cout << "Scenario #" << s << ":" << endl;
        cout << fib(n+2)<< endl;
    }
    return 0;
}
