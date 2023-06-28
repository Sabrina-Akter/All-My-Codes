#include <stdio.h>
#include <string.h>
int main()
{
    int t,i,count1,count2,l,j;
    char A[100],c;
    scanf("%d", &t);
    scanf("%c", &c);
    for(i=0;i<t;i++)
    {
        gets(A);
        l = strlen(A);
        count1 = 0;
        count2 = 0;
        for(j=0;j<l;j++)
        {
            if(A[j]=='A' || A[j]=='a' || A[j]=='E' || A[j]=='e' || A[j]=='I' || A[j]=='i' || A[j]=='O' || A[j]=='o' || A[j]=='U' || A[j]=='u')
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }
        char V[count1];
        char C[count2];
        int x=0, y=0;
        for(j=0;j<l;j++)
        {
            if(A[j]=='A' || A[j]=='a' || A[j]=='E' || A[j]=='e' || A[j]=='I' || A[j]=='i' || A[j]=='O' || A[j]=='o' || A[j]=='U' || A[j]=='u')
            {
                V[x]=A[j];
                x++;
            }
            else if((A[j]>64 && A[j]<91) || (A[j]>96 && A[j]<123))
            {
                C[y]=A[j];
                y++;
            }
        }
        V[x]='\0';
        C[y]='\0';
        printf("%s\n", V);
        printf("%s\n", C);
    }
    return 0;
}
