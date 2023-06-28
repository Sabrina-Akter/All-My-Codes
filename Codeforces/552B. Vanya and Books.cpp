#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

ll A[10]={10,100,1000,10000,100000,1000000,10000000,100000000,1000000000,10000000000};
ll B[10]={1,2,3,4,5,6,7,8,9,10};
ll C[10]={9,90,900,9000,90000,900000,9000000,90000000,900000000,9000000000};
ll D[10]={9,99,999,9999,99999,999999,9999999,99999999,999999999,9999999999};

int main()
{
    fastt;
    ll n, i, dif, sum=0;
    cin >> n;
    for(i=0;i<10;i++)
    {
        if(D[i]<n)
        {
            sum+=(B[i]*C[i]);
        }
        else
        {
            dif = n-D[i-1];
            sum+=(dif*B[i]);
            break;
        }
    }
    cout << sum << endl;
    return 0;
}
