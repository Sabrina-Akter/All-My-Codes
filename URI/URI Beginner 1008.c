#include <stdio.h>
int main()
{
   int NUMBER, B;
   float C, SALARY;
   scanf("%d %d %f", &NUMBER, &B, &C);
   SALARY = B*C;
   printf("NUMBER = %d\n", NUMBER);
   printf("SALARY = %0.2f\n", SALARY);

   return 0;
}

