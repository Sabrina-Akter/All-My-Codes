#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, x, j, c=0;
    cin >> n;

    for(i=0;i<n;i++)
    {
        c++;
        cin >> x;
        int N[x];
        for(j=0;j<x;j++)
        {
            cin >> N[j];
        }
        sort(N,N+x);
        int f = x/2;
        cout << "Case " << c << ": " << N[f] << endl;
    }
    return 0;
}
