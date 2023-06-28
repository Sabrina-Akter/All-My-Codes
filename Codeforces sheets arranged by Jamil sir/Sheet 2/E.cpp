#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin >> n;
    long long N[n];

    for(i=0;i<n;i++)
    {
        cin >> N[i];
    }
    sort(N,N+n);

    cout << N[n-1] << endl;

    return 0;
}
