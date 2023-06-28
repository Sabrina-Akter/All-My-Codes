#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, f=0;
    cin >> n;
    for(i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
    return 0;
}
