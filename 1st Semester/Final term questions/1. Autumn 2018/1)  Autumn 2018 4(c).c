#include<stdio.h>
#include<string.h>

int main()
{
    char s1[8]="IIUC", s2[8]="CSE", s3[8]="1121";
    printf("%d\n", strlen(s1));
    printf("%s\n", strcpy(s1,s2));
    printf("%s\n", strcat(s2,s3));
    printf("%s\n", strrev(s2));
    return 0;
}
