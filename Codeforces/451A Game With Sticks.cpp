#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, m, sum, x=0, y, i;
    cin >> n >> m;
    for(i=0;i<=500;i++)
    {
        x++;
        if(m>0 && n>0)
        {
            if(x%2!=0)
            {
                y = 1;
            }
            else if(x%2==0)
            {
                y = 0;
            }
        }
        else
        {
            break;
        }
        n--;
        m--;
    }
    if(y==1)
    {
        cout << "Akshat\n";
    }
    else if(y==0)
    {
        cout << "Malvika\n";
    }
    return 0;
}
