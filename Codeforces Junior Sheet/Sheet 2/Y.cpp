#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, f1 = 1, f2 = 1, sum;
    cin >> n;
    if(n==1)
    {
        cout << "0";
    }
    else if(n==2)
    {
        cout << "0 1";
    }
    else if(n==3)
    {
        cout << "0 1 1";
    }
    else
    {
        cout << "0 1 1 ";
        for(i=4;i<=n;i++)
        {
            sum = f1 + f2;
            f1 = f2;
            f2 = sum;
            cout << sum << " ";
        }
    }
    return 0;
}
