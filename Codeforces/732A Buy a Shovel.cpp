#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll a, b, i, prod;
    cin >> a >> b;
    for(i=1;i<=2000;i++)
    {
        prod = a * i;
        if(prod%10==0)
        {
            cout << i << endl;
            break;
        }
        else if(prod%10==b)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
