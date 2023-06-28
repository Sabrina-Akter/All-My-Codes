#include <stdio.h>

int main()
{
    int i,j,sum=0,num[20]={5,2,6,1,7,4,9,0,6,3,5,2,8,9,5,4,6,8,0,1};

    for(i=0;i<20;i++)
    {
        sum = sum + num[i];
        num[i]=sum;
    }
    return 0;
}
