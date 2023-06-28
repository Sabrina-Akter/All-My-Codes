#include<bits/stdc++.h>
using namespace std;

int is_prime(int a)
{
    int i, f=0;
    for(i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
        {
            f=1;
            break;
        }
    }
    if(f==0)
    {
        return 1;
    }
}


int main()
{
    long long a, b;
    cin >> a >> b;
    if(a==2)
    {
        if(b==3)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    else
    {
        while(1)
        {
            a = a + 2;
            if(is_prime(a)==1)
            {
                break;
            }
        }
        if(a==b)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
