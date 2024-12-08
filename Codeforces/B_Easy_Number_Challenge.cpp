#include <bits/stdc++.h>
using namespace std;

int d[1000010];

int main() 
{
    int a, b, c, i, j, k, s = 0;

    for (i = 1; i <= 1000000; i++) 
    {
        for (j = i; j <= 1000000; j += i) 
        {
            d[j]++;
        }
    }

    cin >> a >> b >> c;

    for (i = 1; i <= a; i++) 
    {
        for (j = 1; j <= b; j++) 
        {
            for (k = 1; k <= c; k++) 
            {
                s += d[i * j * k];
            }
        }
    }

    cout << s;
    return 0;
}
