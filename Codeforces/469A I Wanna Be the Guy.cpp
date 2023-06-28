#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int i, n, m, x, y, sum=0;
    cin >> n;
    vector <int> v((n+1), 0);
    cin >> x;
    for(i=0;i<x;i++)
    {
        cin >> m;
        v[m] = 1;
    }
    cin >> y;
    for(i=0;i<y;i++)
    {
        cin >> m;
        v[m] = 1;
    }
    for(i=1;i<=n;i++)
    {
        sum = sum + v[i];
    }
    if(sum==n)
    {
        cout << "I become the guy.\n";
    }
    else
    {
        cout << "Oh, my keyboard!\n";
    }
    return 0;
}
