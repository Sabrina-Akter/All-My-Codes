#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, p, q, sum=0;
    cin >> n;
    while(n--)
    {
        cin >> p >> q;
        if(1<q-p)
        {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}
