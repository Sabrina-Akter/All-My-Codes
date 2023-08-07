#include <stdio.h>
#include <string.h>

int main()
{
    char a[10000], b[10000];

    scanf("%s%s", a, b);

    int m = strlen(a), n = strlen(b);

    int x = a[m-1] - 48, y = b[n-1] - 48;

    printf("%d\n", x+y);

    return 0;
}
