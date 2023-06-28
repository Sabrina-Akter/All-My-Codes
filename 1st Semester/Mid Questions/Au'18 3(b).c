#include<stdio.h>
int main()
{
    int department;
    scanf("%d", &department);
    switch(department){
    case '1':
    printf("CSE");
    break;
    case '2':
    printf("EEE");
    break;
    case '3':
    printf("ETE");
    break;
    default:
    printf("Out of range Engineering Faculty");
    break;
    }
    return 0;
}
