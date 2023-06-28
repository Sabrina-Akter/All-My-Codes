#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c, i, sum=0, f=0;
    cin >> a >> b;
    c = 240 - b;
    for(i=1;i<=a+1;i++)
    {
        sum = sum + (i*5);
        if(sum>c)
        {
            f = 1;
            cout << i-1 << endl;
            break;
        }
    }
    if(f==0)
    {
        cout << a << endl;
    }
    return 0;
}
