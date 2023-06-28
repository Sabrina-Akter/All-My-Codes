#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

ll A[102];
ll B[102];
int main()
{
    fastt;
    ll t, n, i;
    for(i=2;i<=100;i=i+2)
    {
        A[i]=i-1;
        A[i-1] = i;
    }
    for(i=98;i>=4;i=i-2)
    {
        B[i] = i+1;
        B[i+1] = i;
    }
    B[1]=3,B[2]=1,B[3]=2;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(i=1;i<=n;i++)
        {
            if(n%2==0)
            {
                cout << A[i] << " ";
            }
            else
            {
                cout << B[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
