#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

ll A[11];

int main()
{
    fastt;
    ll n,N,i,prod=1,coin=0;
    for(i=1;i<=10;i++)
    {
        prod*=i;
        A[i]=prod;
    }
    cin >> n;
    N=n;
    for(i=10;i>=1;i--)
    {
        if(N==0)
        {
            break;
        }
        else if(A[i]<=N)
        {
            coin+=N/A[i];
            N=N%A[i];
        }
    }
    cout << coin << endl;
    return 0;
}
