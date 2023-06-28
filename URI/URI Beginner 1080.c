#include <stdio.h>

int main()
{
    int arr[100];
    int i, location = 1;

    for(i=0;i<100;i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0;i<100;i++)
    {
        if(arr[i]>arr[location])
        {
            location = i;
        }
    }
    printf("%d\n", arr[location]);
    printf("%d\n", location+1);

    return 0;
}
