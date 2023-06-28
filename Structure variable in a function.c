#include <stdio.h>
#include <string.h>

struct person
{
    char Name[20];
    int Age;
};

void display(struct person p)
{
    printf("Name = %s\n", p.Name);
    printf("Age = %d", p.Age);
    return;
}

int main()
{
    struct person person1;
    strcpy(person1.Name , "Sabrina Akter");
    person1.Age = 20;
    display(person1);
    return 0;
}
