#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, a, b, j, k, sum;
    cin >> t;
    for(i=0;i<t;i++)
    {
        cin >> a >> b;
        sum = 0;
        j = 1;
        k = 0;
        while(k!=(b-1))
        {
            k++;
            sum = sum + j;
            j = j+2;
        }
        if((a-sum)%2!=0)
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
