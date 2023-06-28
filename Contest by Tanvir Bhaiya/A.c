#include <stdio.h>

int main()
{
    int t,d,i,n,j,x,f;
    char S[200];
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        x = 0;
        f = 0;
        scanf("%d", &d);
        scanf("%s", S);
        n = strlen(S);
        for(j=0;j<n;j++)
        {
            if(S[j]=='8')
            {
                f = 1;
                x = j+1;
                break;
            }
        }
        if(((n-x>=11) && (f==1)) || ((S[0]=='8') && (n>=11)))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
