#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, j, m, n;
    char a[60], b[60], c[120];
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%s", a);
        scanf("%s", b);

        int L1 = strlen(a);
        int L2 = strlen(b);
        int L3 = L1 + L2;

        m = 0;
        n = 0;
        for(j=0;j<L3;j++)
        {
            if(j%2==0)
            {
                if(a[m]>=L1)
                {
                    continue;
                }
                else
                {
                c[j] = a[m];
                m++;
                }
            }
            else
            {
                if(b[n]>=L2)
                {
                    continue;
                }
                else
                {
                c[j] = b[n];
                n++;
                }
            }
        }
        c[j]='\0';
        printf("%s\n", c);
    }
}
