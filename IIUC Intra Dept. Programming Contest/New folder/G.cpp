#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll max(ll a, ll b);
char X[1000000];
char Y[1000000];

ll lcs(char *X, char *Y, ll m, ll n )
{
    ll L[m + 1][n + 1];
    ll i, j;

    for (i = 0; i <= m; i++)
    {
        for (j = 0; j <= n; j++)
        {
        if (i == 0 || j == 0)
            L[i][j] = 0;
        else if (X[i - 1] == Y[j - 1])
            L[i][j] = L[i - 1][j - 1] + 1;
        else
            L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }

    return L[m][n];
}

ll max(ll a, ll b)
{
    return (a > b)? a : b;
}

// Driver Code
int main()
{
    ll m, n, M, N, i, mx, a=-1, b=-1;
    string s1, s2;
    cin >> m >> n;
    cin.ignore(256, '\n');
    getline(cin, s1);
    getline(cin, s2);
    M = s1.size();
    N = s2.size();
    mx= max(M, N);
    for(i=0;i<mx;i++)
    {
        if(i<M)
        {
            if(s1[i]==' ')
            {
               continue;
            }
            else
            {
                a++;
                X[a] = s1[i];
            }
        }
        if(i<N)
        {
            if(s2[i]==' ')
            {
                continue;
            }
            else
            {
                b++;
                Y[b] = s2[i];
            }
        }
    }
    cout << lcs( X, Y, m, n );

    return 0;
}
