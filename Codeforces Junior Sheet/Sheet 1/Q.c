#include <stdio.h>
#include <string.h>

int main()
{
    char a[10000];

    scanf("%s", a);

    int m = strlen(a);

    int x = a[0] - 48;

    if(x%2==0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }

    return 0;
}
