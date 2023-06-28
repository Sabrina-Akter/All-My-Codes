#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i;
        cin >> n;
        vector <int> a(n+1), b(n+1), c(n+1);
        for(i=1;i<=n;i++)
        {
            cin >> a[i];
        }
        a[0] = a[n];
        for(i=1;i<=n;i++)
        {
            cin >> b[i];
        }
        b[0] = b[n];
        for(i=1;i<=n;i++)
        {
            cin >> c[i];
        }
        c[0] = c[n];
        for(i=0;i<n;i++)
        {

        }
    }
    return 0;
}
