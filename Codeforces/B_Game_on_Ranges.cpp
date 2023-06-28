#include<bits/stdc++.h>
using namespace std;
 
#define pii pair<int,int>
#define piii pair<pii,int>
#define xx first
#define yy second
 
piii a[1005];
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    int t,n,i,j,k;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(i=1;i<=n;i++) {
 
            cin >> a[i].xx.xx >> a[i].xx.yy;
            a[i].yy=0;
        }
        for(i=1;i<=n;i++)
        {
            long long dif=LONG_LONG_MAX;
            long long id;
            for(j=1;j<=n;j++)
            {
                if(a[j].yy==0 && a[j].xx.xx <= i && a[j].xx.yy >= i)
                {
                    if(abs(a[j].xx.xx-a[j].xx.yy)<dif)
                    {
                        dif = abs(a[j].xx.xx-a[j].xx.yy);
                        id=j;
                    } 
                }
            }
            a[id].yy=i;
        }
        for(i=1;i<=n;i++) cout << a[i].xx.xx << ' ' << a[i].xx.yy << ' ' << a[i].yy << endl;
    }
}