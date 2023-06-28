#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, i, max, ans;
    cin >> n;
    long long ar[n];
    for(i=0;i<n;i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar+n);
    max = ar[n-1];
    ans = count(ar, ar+n, max);
    cout << ans << endl;
    return 0;
}
