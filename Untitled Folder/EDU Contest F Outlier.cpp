#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,n,m,s,c=0,x,y,z;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        c++;
        scanf("%d%d%d", &n, &m, &s);
        x = m + (s*3);
        y = m - (s*3);
        z = 0;
        int N[n];
        for(j=0;j<n;j++)
        {
            scanf("%d", &N[j]);

            if(N[j]>x || N[j]<y)
            {
                z++;
            }
        }
        printf("Case %d: %d\n", c,z);
    }
    return 0;
}
