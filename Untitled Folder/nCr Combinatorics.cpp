#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

ll i, j, C[64][64];

void nCr()
{
    for (i = 1; i <= 60; i++)
    {
        C[i][0] = C[i][i] = 1;
        for (j = 1; j < i; j++)
        {
            C[i][j] = (C[i-1][j] + C[i-1][j-1]);
        }
    }
}

int main()
{
    fastt;
    nCr();
    return 0;
}
