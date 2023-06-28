#include <stdio.h>
int main()
{
    int i,lol=0,lmao=0,rofl=0,lel=0,sum=0;
    char A[100000];
    gets(A);
    int l = strlen(A);
    for(i=0;i<(l-2);i++)
    {
        if(A[i]=='l' && A[i+1]=='o' && A[i+2]=='l')
        {
            lol=lol+1;
        }
        if(A[i]=='l' && A[i+1]=='e' && A[i+2]=='l')
        {
            lel=lel+4;
        }
    }
    sum = lol + lel;
    for(i=0;i<(l-3);i++)
    {
        if(A[i]=='l' && A[i+1]=='m' && A[i+2]=='a' && A[i+3]=='o')
        {
            lmao=lmao+3;
        }
        if(A[i]=='r' && A[i+1]=='o' && A[i+2]=='f' && A[i+3]=='l')
        {
            rofl=rofl+2;
        }
    }
    sum = sum + lmao + rofl;
    if(sum>=1 && sum<=5)
    {
        printf("Patient has bright red face\n");
    }
    else if(sum>=6 && sum<=12)
    {
        printf("Patient is unable to speak\n");
    }
    else if(sum>=13 && sum<=20)
    {
        printf("Patient's sides are mildly bruised\n");
    }
    else if(sum>=21 && sum<=30)
    {
        printf("Patient has broken jaw, fractured ribs\n");
    }
    else if(sum>=31 && sum<=49)
    {
        printf("Patient is in a coma\n");
    }
    else if(sum>=50)
    {
        printf("Patient is dead\n");
    }
    return 0;
}
