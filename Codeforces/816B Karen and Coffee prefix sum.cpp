#include <bits/stdc++.h>
using namespace std;

int main()
{
    long i, j, x, y, z, a, b, m, n, sum=0;
    vector <long> v(200009, 0);
    vector <long> N(200009, 0);
    cin >> x >> y >> z;
    for(i=0;i<x;i++)
    {
        cin >> a >> b;
        v[a]++;
        v[b+1]--;
    }
    for(i=1;i<200009;i++)
    {
        v[i] = v[i] + v[i-1];
        if(v[i]>=y)
        {
            N[i] = 1;
        }
        N[i] = N[i] + N[i-1];
    }
    for(i=0;i<z;i++)
    {
        cin >> m >> n;
        cout << N[n] - N[m-1] << endl;
    }
    return 0;
}
