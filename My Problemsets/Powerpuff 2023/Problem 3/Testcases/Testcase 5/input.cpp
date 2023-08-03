#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("Input 5.txt","w", stdout);
    long long t=1000, n=50, b=100, s=100, i, j;
    cout << t << endl;
    for(i=1;i<=t;i++)
    {
        cout << n << " " << b << " " << s << endl;
        for(j=1;j<=b;j++)
        {
            if(j==b-1)
            {
                cout << n-1 << " ";
            }
            else
            {
                cout << 100 << " ";
            }
        }
        cout << endl;
    }
    fclose(stdout);
    return 0;
}