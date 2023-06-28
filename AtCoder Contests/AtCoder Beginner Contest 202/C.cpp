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
    vll A, B, C;
    ll n, i, j, x, sum=0;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> x;
        A.pb(x);
    }
    for(i=0;i<n;i++)
    {
        cin >> x;
        B.pb(x);
    }
    for(i=0;i<n;i++)
    {
        cin >> x;
        C.pb(x);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(A[i]==B[j])
            {
                ll c = count(C.begin(), C.end(), j+1);
                if(c>=1)
                {
                    sum+=c;
                }
            }
        }
    }
    cout << sum << endl;
    return 0;
}
