#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, i, sum=0, c=0, f=0, m=0;
    cin >> a >> b;
    for(i=1;i;i++)
    {
        m++;
        sum = sum + i;
        if(sum==b && m==a)
        {
            break;
        }
        if(sum - b + m >=a)
        {
            f = 1;
            break;
        }
    }
    if(f==1)
    {
        while(1)
        {
            sum--;
            c++;
            if(sum==b)
            {
                break;
            }
        }
    }
    cout << c << endl;
    return 0;
}
