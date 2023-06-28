#include <bits/stdc++.h>
using namespace std;
#define ll long long

void show()
{
    ll n, sum=0, x;
    cin >> n;
    while(1)
    {
        if(n>=100)
        {
            x = n/100;
            n = n - (x*100);
        }
        else if(n>=20)
        {
            x = n/20;
            n = n - (x*20);
        }
        else if(n>=10)
        {
            x = n/10;
            n = n - (x*10);
        }
        else if(n>=5)
        {
            x = n/5;
            n = n - (x*5);
        }
        else if(n>=1)
        {
            x = n/1;
            n = n - (x*1);
        }
        sum = sum + x;
        if(n==0)
        {
            break;
        }
    }
    cout << sum << endl;
}

int main()
{
    show();
    return 0;
}
