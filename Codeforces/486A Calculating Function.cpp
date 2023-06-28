#include <bits/stdc++.h>
using namespace std;
#define ll long long

void show()
{
    ll n;
    cin >> n;
    if(n%2==0)
    {
        cout << n/2 << endl;
    }
    else
    {
        cout << ((n/2)+1)*(-1) << endl;
    }
}

int main()
{
    show();
    return 0;
}
