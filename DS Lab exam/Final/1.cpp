//ID: C191249
//Question.1: Write a program that reads in a sequence of characters and prints them in reverse order using a stack.

#include<bits/stdc++.h>
using namespace std;
#define MAX 100	/*maximum no. of characters*/

/*(1): Stack variables*/
int top = -1;
int item;

/*(2): string declaration*/
char stack_string[MAX];

/*(3): function to push character (item)*/
void pushChar(char item);

/*(4): function to pop character (item)*/
char popChar(void);

/*(5): function to check stack is empty or not*/
int isEmpty(void);

/*(6): function to check stack is full or not*/
int isFull(void);

/*(7): Function definition of pushChar*/
void pushChar(char item)
{
    /*checks if the stack is full*/
    if(isFull())
    {
        printf("\nStack is FULL !!!\n");
        return;
    }

    /*increase top and push item in stack*/
    top=top+1;
    stack_string[top]=item;
}

/*(8): function definition of popChar*/
 char popChar()
{
    /*check for empty*/
    if(isEmpty())
    {
        printf("\nStack is EMPTY!!!\n");
        return 0;
    }

    /*pop item and decrease top*/
    item = stack_string[top];
    top=top-1;
    return item;
}

/*(9): function definition of isEmpty*/
int isEmpty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}

/*(10): function definition of isFull*/
int isFull()
{
    if(top==MAX-1)
        return 1;
    else
        return 0;
}

/*(11): main() function*/
int main()
{
    char str[MAX];

    int i;

    cout << "Input a string:\n";
    gets(str); /*read string with spaces*/

    for(i=0;i<strlen(str);i++)
    {
       pushChar(str[i]);
    }


    for(i=0;i<strlen(str);i++)
    {
       str[i] = popChar();
    }
    cout << "Reversed String is:\n" << str << endl;
    return 0;
}




