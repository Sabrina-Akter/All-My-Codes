#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, sum = 0, x = -1, i;
    cin >> n;
    for(i=0;i<n;i++)
    {
        x = x + 2;
        sum = sum + x;
    }
    x = -1;
    for(i=0;i<n-1;i++)
    {
        x = x + 2;
        sum = sum + x;
    }
    cout << sum << endl;
    return 0;
}
