#include <stdio.h>

int main()
{
    int n=4,i,j=1,k,l=1,x,y,z,o=n-1;

    for(i=1;i<=(2*n)-1;i=i+2,l++)
    {
        for(k=n-1;k>=l;k--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
  for(x=(2*(n-1))-1;x>=1;x=x-2,o--)
  {
      for(y=1;y>=o;y++)
      {
          printf(" ");
      }

      printf("\n");
  }
    return 0;
}
