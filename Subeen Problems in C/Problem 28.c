#include <stdio.h>
int main()
{
    int t,i,flag=0;
    scanf("%d", &t);
    int n[t];
    for(i=0;i<t;i++)
    {
        scanf("%d", &n[i]);
    }
    for(i=0;i<t-1;i++)
    {
        if(n[i+1]<n[i])
        {
            flag++;
            break;
        }
    }
    if(flag==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
