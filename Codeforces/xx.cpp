#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll T, N, M;
    cin >> T;
    while(T--)
    {
        ll i, j;
        cin >> N >> M;
        char C;
        char A[i][j];
        cin >> N >> M;
        for(i=0;i<N;i++)
        {
            for(j=0;j<M;j++)
            {
                cin >> C;
                A[i][j]=C;
            }
        }
    }
    return 0;
}
