#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, x, y, z, a, b, m, n, sum=0;
    vector <int> v(200000, 0);
    cin >> x >> y >> z;
    for(i=0;i<x;i++)
    {
        cin >> a >> b;
        for(j=a;j<=b;j++)
        {
            v[j]++;
        }
    }
    for(i=0;i<z;i++)
    {
        sum = 0;
        cin >> m >> n;
        for(j=m;j<=n;j++)
        {
            if(v[j]>=y)
            {
                sum++;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
