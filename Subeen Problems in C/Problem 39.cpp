#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,m,t;
    char c;
    scanf("%d", &t);
    scanf("%c", &c);
    for(m=0;m<t;m++)
    {
        char  A[100000];
        scanf("%[^\n]%*c", A);
        int count=0, l = strlen(A);
        for(i=0;i<l;i++)
        {
            if((A[i]>64 && A[i]<91) || (A[i]>96 && A[i]<123))
            {
                count++;
            }
        }
        char B[count];
        char C[count];
        int j=0;
        int k=count-1;
        for(i=0;i<l;i++)
        {
            if((A[i]>64 && A[i]<91) || (A[i]>96 && A[i]<123))
            {
                B[j]=tolower(A[i]);
                j++;
                C[k]=tolower(A[i]);
                k--;
            }
        }
        B[j]='\0';
        C[count]='\0';
        if(strcmp(B,C)==0)
        {
            printf("Yes! It is Palindrome!\n");
        }
        else if(strcmp(B,C)!=0)
        {
            printf("Sorry! It is not Palindrome!\n");
        }
    }
    return 0;
}
