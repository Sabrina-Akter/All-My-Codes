#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, n, sum = 0;
    cin >> n;
    while(n!=0)
    {
        if(n-5>=0)
        {
            n = n-5;
            sum++;
        }
        else if(n-4>=0)
        {
            n = n-4;
            sum++;
        }
        else if(n-3>=0)
        {
            n = n-3;
            sum++;
        }
        else if(n-2>=0)
        {
            n = n-2;
            sum++;
        }
        else if(n-1>=0)
        {
            n = n-1;
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}
