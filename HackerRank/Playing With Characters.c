#include <stdio.h>

int main()
{
    char ch, s[100], sen[100];

    scanf("%c", &ch);
    printf("%c\n", ch);

    scanf("%s", s);
    printf("%s\n", s);

    scanf("\n");
    scanf("%[^\n]%*c", sen);
    printf("%s\n", sen);

    return 0;
}
