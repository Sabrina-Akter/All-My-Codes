#include<stdio.h>

main()
{
    char Name[20];
    char ID[10];
    char UniName[10];
    scanf("%s\n", &Name);
    scanf("%s\n", &ID);
    scanf("%s", &UniName);
    printf("\nName: %s\n", Name);
    printf("ID: %s\n", ID);
    printf("University Name: %s\n", UniName);
    return 0;
}

