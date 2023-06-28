#include <stdio.h>
int main()
{
   char a;
   double b, c, d, TOTAL;
   scanf("%s %lf %lf", &a, &b, &c);
   d = c*.15;
   TOTAL = b + d;
   printf("TOTAL = R$ %.2lf\n", TOTAL);
   return 0;
}

