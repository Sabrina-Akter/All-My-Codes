#include <stdio.h>

int main()
{
    int i;
    long long l;
    char s[200];
    float f;
    double d;

    scanf("%d%lld%s%f%lf", &i, &l, &s, &f, &d);
    printf("%d\n%lld\n%s\n%.2f\n%.1lf\n", i, l, s, f, d);
}
