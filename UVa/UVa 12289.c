#include <stdio.h>
#include <string.h>
int main()
{
    int t,i,l;
    char A[10];
    char B;

    scanf("%d", &t);
    scanf("%c", &B);
    for(i=0;i<t;i++)
    {
        gets(A);
        l = strlen(A);
        if(l==3 && ((strcmp("one", A)==0) || (A[0]=='o' && A[1]=='n') || (A[1]=='n' && A[2]=='e') || (A[0]=='o' && A[2]=='e')))
        {
            printf("1\n");
        }
        else if(l==3 && ((strcmp("two", A)==0) || (A[0]=='t' && A[1]=='w') || (A[1]=='w' && A[2]=='o') || (A[0]=='t' && A[2]=='o')))
        {
            printf("2\n");
        }
        else if(l==5 && ((strcmp("three", A)==0) || (A[1]=='h' && A[2]=='r' && A[3]=='e' && A[4]=='e') || (A[0]=='t' && A[2]=='r' && A[3]=='e' && A[4]=='e') || (A[0]=='t' && A[1]=='h' && A[3]=='e' && A[4]=='e') || (A[0]=='t' && A[1]=='h' && A[2]=='r' && A[4]=='e') || (A[0]=='t' && A[1]=='h' && A[2]=='r' && A[3]=='e')))
        {
            printf("3\n");
        }
    }
    return 0;
}
