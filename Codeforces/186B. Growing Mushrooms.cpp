#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define FOR(i,x,y) for(ll i=x;i<=y;i++)
#define vll vector <ll>
#define pb push_back
double A[1000000];

int main()
{
    fastt;
    ll n, c=0, i, j;
    vector <double> v;
    double a, b, T1, T2, sum1, sum2, t1, t2, k, MAX, N;
    cin >> n >> t1 >> t2 >> k;
    N = n;
    while(n--)
    {
        c++;
        cin >> a >> b;
        T1 = t1*a;
        T2 = t2*b;
        T1 = T1-((k/100)*T1);
        sum1 = T1+T2;
        T1 = t1*b;
        T2 = t2*a;
        T1 = T1-((k/100)*T1);
        sum2 = T1+T2;
        MAX = max(sum1, sum2);
        v.pb(MAX);
        A[c] = MAX;
    }
    sort(v.begin(), v.end());
    for(i=v.size()-1;i>=0;i--)
    {
        for(j=1;j<=N+2;j++)
        {
            if(v[i]==A[j])
            {
                cout << j << " " << fixed << setprecision(2) << v[i] << endl;
                A[j] = -0.00000001;
                break;
            }
        }
    }
    return 0;
}
