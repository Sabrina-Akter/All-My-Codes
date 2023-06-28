#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k, f=0;
    cin >> n >> k;
    while(n!=0)
    {
        n = n/k;
        f++;
    }
    cout << f << endl;
    return 0;
}

