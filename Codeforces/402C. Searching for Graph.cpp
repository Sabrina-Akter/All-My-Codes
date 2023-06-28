#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll t, n, p, i, j, x, f, flag;
    cin >> t;
    while(t--)
    {
        f=0, flag=0;
        cin >> n >> p;
        x = (2*n)+p;
        for(i=1;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                f++;
                cout << i << " " << j << endl;
                if(f==x)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                break;
            }
        }
    }
    return 0;
}
