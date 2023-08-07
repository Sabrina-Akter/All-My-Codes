#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n[3], x[3], i;
    cin >> n[0] >> n[1] >> n[2];
    x[0] = n[0], x[1]=n[1], x[2]=n[2];
    sort(n,n+3);
    for(i=0;i<3;i++)
    {
        cout << n[i] << endl;
    }
    cout << "\n";
    for(i=0;i<3;i++)
    {
        cout << x[i] << endl;
    }
    return 0;
}
