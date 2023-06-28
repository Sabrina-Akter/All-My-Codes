#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int

ll p,d,n,k;
int main()
{
    fastt;
    cin >> p >> d;
    n=p+1;
    for(k=10;; k*=10)
    {
        if(p%k>d)
        {
           break;
        }
        else
        {
            n=p-(p%k);
        }
    }
    cout << n-1 << endl;
    if(p-(n-1)>d)
    {
        cout << p << endl;
    }
    else
    {
        cout<<n-1;
    }
    return 0;
}
