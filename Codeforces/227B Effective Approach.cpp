#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, i, x, sum1=0, sum2=0, q, Q;
    cin >> n;
    long long ar[n+1];
    for(i=1;i<=n;i++)
    {
        cin >> x;
        ar[x] = i;
    }
    cin >> q;
    for(i=0;i<q;i++)
    {
        cin >> Q;
        sum1 = sum1 + ar[Q];
        sum2 = sum2 + n - ar[Q] + 1;
    }
    cout << sum1 << " " << sum2 << endl;
    return 0;
}
