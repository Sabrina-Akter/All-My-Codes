#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
bool a[1000006];
vector <long long> prime;
vector <long long> twin;
void func()
{
    long long i, j;
    memset(a, true, sizeof(a));
    for(i=2;i*i<=1000006;i++)
    {
        if(a[i]==true)
        {
            for(j=i*i;j<=1000006;j=j+i)
            {
                a[j] = false;
            }
        }
    }
    for(i=2;i<=1000006;i++)
    {
        if(a[i]==true)
        {
            prime.push_back(i);
        }
    }
}
 
int main()
{
    ll l, r, i, j, k, m, p, x, y, h, t;
    func();
    cin >> t;
    while(t--)
    {
            ll cnt=0;
            cin >> l >> r;
            bool b[r-l+1];
            memset (b, true, sizeof(b));
            for(i=0;prime[i]*prime[i]<=r;i++)
            {
                x = prime[i];
                y = (l/x)*x;
                if(y<l)
                {
                    y = y+x;
                }
                for(j=y;j<=r;j=j+x)
                {
                    b[j-l] = false;
                }
                if(y<1000000 && a[y]==true)
                {
                    b[y-l] = true;
                }
            }
            if(l==1)
            {
                b[0] = false;
            }
            for(i=0;i<r-l+1;i++)
            {
                if(b[i]==true)
                {
                    cnt++;
                }
            }
            cout << cnt << "\n";
    }
    return 0;
} 