#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll a, b, x, sum = 0;
void show()
{
    cin >> a >> b >> x;
    while(1)
    {
        if(a%x==0)
        {
            sum++;
        }
        a++;
        if(a>b)
        {
            cout << sum << endl;
            break;
        }
    }
}

int main()
{
    show();
    return 0;
}
