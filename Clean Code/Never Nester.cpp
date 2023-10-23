/*
{
    {
        {
            //Ekhane first bracket 3 ta. So, total_nests = 3.
            //Not a good practice.
            //The lesser the nests, the better.
        }
    }
}

2 solutions:

(1) Extraction: Nest beshi hoye gele, ekdom bhetor er if-else condition 
gulo ke onno alada function e convert kore fela. The goal is to reduce nests.

(2) Inversion: Unhappy condition ta shurutei "if" e rekhe, return kore dewa.
Second half ta te "else" dite hobe na. So, another nest got reduced.
*/

//Example: Original 4-nested code

#include <bits/stdc++.h>
using namespace std;

int calculate(int bottom, int top)
{
    if(top >= bottom)
    {
        int sum = 0;

        for(int number=bottom; number<=top; number++)
        {
            if(number%2==0)
            {
                sum+=number;
            }
        }
        return sum;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int bottom, top;
    cin >> bottom >> top;
    calculate(bottom, top);

    return 0;
}

//1. Applying Extraction:

int evenNumber(int number)
{
    if(number%2==0)
    {
        return number;
    }
    return 0;
}

int calculate(int bottom, int top)
{
    if(top >= bottom)
    {
        int sum = 0;

        for(int number=bottom; number<=top; number++)
        {
            sum+=evenNumber(number);
        }
        return sum;
    }
    else
    {
        return 0;
    }
}

//2. Applying Inversions:

int evenNumber(int number)
{
    if(number%2==0)
    {
        return number;
    }
    return 0;
}

int calculate(int bottom, int top)
{
    if(top < bottom)
    {
        return 0;
    }
        
    int sum = 0;

    for(int number=bottom; number<=top; number++)
    {
        sum+=evenNumber(number);
    }
    return sum;
}

//The above code is the combination of (1) Extraction + (2) Inversion