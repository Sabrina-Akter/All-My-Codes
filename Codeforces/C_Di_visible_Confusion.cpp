#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, num=0;
        cin >> n;
        int divisible = 1;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            divisible = 1;
            for (int j = i + 1; j >= 2; j--)
            { 
                if (x % j!=0)
                {
                    divisible = 0;
                    break;
                }
            }
            if(divisible==0)
            {
                num++;
            }
        }
        if (num==n)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}