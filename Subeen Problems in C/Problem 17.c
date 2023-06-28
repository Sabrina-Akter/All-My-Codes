#include <stdio.h>
#include <string.h>
int main()
{
    int t,i,count,l,j;
    char A[1001],c;
    scanf("%d", &t);
    scanf("%c", &c);
    for(i=0;i<t;i++)
    {
        gets(A);
        l = strlen(A);
        count = 0;
        for(j=0;j<l;j++)
        {
            if(A[j]=='A' || A[j]=='a' || A[j]=='E' || A[j]=='e' || A[j]=='I' || A[j]=='i' || A[j]=='O' || A[j]=='o' || A[j]=='U' || A[j]=='u')
            {
                count++;
            }
        }
        printf("Number of vowels = %d\n", count);
    }
    return 0;
}
