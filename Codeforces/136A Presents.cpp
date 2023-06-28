#include <bits/stdc++.h>
using namespace std;

int main()
{
    map <int, int> v;
    int n, i, x;
    cin >> n;
    for(i=1;i<=n;i++)
    {
        cin >> x;
        v[x]=i;
    }
    for(i=1;i<=n;i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
