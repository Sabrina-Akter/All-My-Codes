#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,n;
    char N[100000];
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%s", N);
        n = strlen(N);

        if((strcmp(N, "1")==0) || (strcmp(N, "4")==0) || (strcmp(N, "78")==0))
        {
            printf("+\n");
        }
        else if(N[0]=='9' && N[n-1]=='4')
        {
            printf("*\n");
        }
        else if(N[n-2]=='3' && N[n-1]=='5')
        {
            printf("-\n");
        }
        else if(N[0]=='9' && N[n-1]=='4')
        {
            printf("*\n");
        }
        else
        {
            printf("?\n");
        }
    }
    return 0;
}
