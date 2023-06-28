#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, t, sum=0;
    cin >> n;
    int ar[n];
    for(i=0;i<n;i++)
    {
        cin >> ar[i];
    }
    while(1)
    {
        sum = 0;
        for(i=n;i>=1;i--)
        {
            if(ar[i-1]>ar[i])
            {
                t = ar[i-1];
                ar[i-1] = ar[i];
                ar[i] = t;
                sum++;
            }
        }
        if(sum==0)
        {
            break;
        }
    }
    for(i=0;i<n;i++)
    {
        cout << ar[i] << " " << endl;
    }
    return 0;
}
