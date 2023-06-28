#include<stdio.h>

int main()
{
    int A[10]={0,1,3,7,8,10,11,17,18,19};
    int x = 18, left_array_number=0, mid_array_number, right_array_number=10-1, value_of_mid_array, flag=0;

    while(left_array_number<=right_array_number)
    {
        mid_array_number = (left_array_number+right_array_number)/2;
        if(x==A[mid_array_number])
        {
            flag = 1;
            break;
        }
        else if(x>A[mid_array_number])
        {
            left_array_number = mid_array_number + 1;
        }
        else if(x<A[mid_array_number])
        {
            right_array_number = mid_array_number -1;
        }
    }
    if(flag==1)
    {
        printf("The number is present.\n");
        printf("Position = %d.\n", mid_array_number+1);
    }
    else
    {
        printf("The number is not present.\n");
    }

    return 0;
}
