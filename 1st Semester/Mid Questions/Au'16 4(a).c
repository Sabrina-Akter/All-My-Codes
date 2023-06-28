#include<stdio.h>

int main()
{
   int indicator;
   scanf("%d", &indicator);
   switch (indicator){
     case 0:
     case 1:
         printf("CSE\n");
     break;
     case 2:
         printf("EEE\n");
     break;
     case 7:
     case 4:
         printf("ETE\n");
     break;
     case 5:
     case 8:
         printf("PHM\n");
     break;
     default:
         printf("Error\n");
   }
   return 0;
}
