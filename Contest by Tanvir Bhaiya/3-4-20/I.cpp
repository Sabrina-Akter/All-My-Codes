#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum=0, i, j, x;
    cin >> n;
    for(i=1;i<=n/2;i++)
    {
        for(j=i;j<=n;j++)
        {
            x = i*j;
            if(x<=n)
            {
                sum++;
            }
            else if(x>n)
            {
                break;
            }
        }
    }
    cout << sum << endl;
    return 0;
}
