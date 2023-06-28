#include <stdio.h>
int prime(int a)
{
    int i,h=0;
    for(i=2;i*i<=a;i++)
    {
        if(a%i==0)
        
        {
           h=1; 
           break;
        }
           
        
    }
         
          
        return h;}
    
    

int main()
{
    int t;
    int N;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&N);
       int x= prime(N);
       if(x==1 || N==1)
       printf("NO\n");
    else
      printf("YES\n");
    }
    
    return 0;
}