#include <bits/stdc++.h>
using namespace std;

int main()
{
    char A;
    int flag=0;

    while(scanf("%c", &A)==1)
    {
        if(A=='\0')
        {
            flag=0;
        }
        if((A=='"') && (flag==0))
        {
            printf("``");
            flag = 1;
        }
        else if((A=='"') && (flag==1))
        {
            printf("''");
            flag = 0;
        }
        else
        {
            printf("%c",A);
        }
    }
    return 0;
}
