#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
//#define N 100000

ll b, g, t, x=-1, B=4, G, sum, i, j, C[64][64];

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
    cin >> b >> g >> t;
    nCr();
    while(1)
    {
        B=4;
        x++;
        B+=x;
        G=t-B;
        if(G<=0 || B>b)
        {
            break;
        }
        else
        {
            sum+=((C[b][B])*(C[g][G]));
        }
    }
    cout << fixed << setprecision(0) << sum << endl;
    return 0;
}
