#include<bits/stdc++.h>
using namespace std;

int sqr(int n)
{
    int x, sum = 0;
    while(1)
    {
        x = n%10;
        sum = sum + (x*x);
        n = n/10;
        if(n==0)
        {
            return sum;
        }
    }
}

void happy(int n)
{
    while(1)
    {
        if(n==1)
        {
            cout << "Happy number.\n";
            break;
        }
        else if(n==0)
        {
            cout << "Unhappy number.\n";
            break;
        }
        else if(n==4)
        {
            cout << "Unhappy number.\n";
            break;
        }
        else
        {
            n = sqr(n);
        }
    }
}

int main()
{
    int n;
    while(1)
    {
        cin >> n;
        happy(n);
    }
}

