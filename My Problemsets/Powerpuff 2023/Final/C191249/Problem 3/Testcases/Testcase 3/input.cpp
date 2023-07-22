#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("Input 3.txt","w", stdout);
    long long t=1000, n=1, b=100, s=100, i, j;
    cout << t << endl;
    for(i=1;i<=t;i++)
    {
        cout << n << " " << b << " " << s << endl;
        for(j=1;j<=b;j++)
        {
            if(j==b)
            {
                cout << s-n-1;
            }
            else
            {
                cout << s-n+1 << " ";
            }
        }
        cout << endl;
        if(n==50)
        {
            n = 0;
        }
        n++;
    }
    fclose(stdout);
    return 0;
}