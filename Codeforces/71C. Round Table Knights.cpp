#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll n, i, j, k, x, flag1, flag2, cnt=0;
    cin >> n;
    ll A[n];
    for(i=0;i<n;i++)
    {
        cin >> A[i];
    }
    for(i=3;i<=n;i++)
    {
        flag2 = 0;
        if(n%i==0)
        {
            x = n/i;
            for(j=0;j<n;j++)
            {
                flag1 = 0, cnt = 0;
                for(k=j;k<n;k=k+x)
                {
                    if(A[k]==0)
                    {
                        flag1 = 1;
                        break;
                    }
                    else if(A[k]==1)
                    {
                        cnt++;
                    }
                    if(cnt!=i)
                    {
                        flag1 = 1;
                    }
                    else if(cnt==i)
                    {
                        flag1 = 0;
                        break;
                    }
                }
                if(flag1==0)
                {
                    cout << "YES" << endl;
                    flag2 = 1;
                    break;
                }
            }
        }
        if(flag2==1)
        {
            break;
        }
    }
    if(flag2==0)
    {
        cout << "NO" << endl;
    }
    return 0;
}
