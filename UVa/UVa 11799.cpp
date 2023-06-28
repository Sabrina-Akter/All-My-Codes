#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, i, j, f=0;
    cin >> t;
    for(i=0;i<t;i++)
    {
        f++;
        cin >> n;
        int N[n];
        for(j=0;j<n;j++)
        {
            cin >> N[j];
        }
        sort(N,N+n);
        cout << "Case " << f << ": " <<N[n-1] << endl;
    }

    return 0;
}
