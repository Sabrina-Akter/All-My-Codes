#include <stdio.h>

int main()
{
    int t,i,j,n1,n2,n3,s,m,l,flag = 0;

    scanf("%d", &t);

    for(i=0;i<t;i++)
    {
        scanf("%d%d%d", &n1, &n2, &n3);
        if(n1>n2 && n1>n3)
        {
            l = n1;
        }
        else if(n2>n1 && n2>n3)
        {
            l = n2;
        }
        else if(n3>n1 && n3>n2)
        {
            l = n3;
        }
        if(n1<n2 && n1<n3)
        {
            s = n1;
        }
        else if(n2<n1 && n2<n3)
        {
            s = n2;
        }
        else if(n3<n1 && n3<n2)
        {
            s = n3;
        }
        if(n1!=s && n1!=l)
        {
            m = n1;
        }
        else if(n2!=s && n2!=l)
        {
            m = n2;
        }
        else if(n3!=s && n3!=l)
        {
            m = n3;
        }
        flag++;
        printf("Case %d: %d %d %d\n", flag,s,m,l);
    }
    return 0;
}
