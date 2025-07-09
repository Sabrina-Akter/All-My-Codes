#include <bits/stdc++.h>
using namespace std;

int n, v = 1e6, i;

int main() 
{
    cin >> n;
    cout << n + 1 << '\n';
    cout << "2 " << n << " 1\n";
    cout << "1 " << n << " " << v << '\n';
    while (--n) 
    {
        cout << "2 " << ++i << " " << --v << '\n';
    }
    
    return 0;
}