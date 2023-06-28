#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    while(1)
    {
        cin >> n;
        if(n==0)
        {
            break;
        }
        x = (n*(n+1)*((2*n)+1))/6;
        cout << x << endl;
    }
    return 0;
}
